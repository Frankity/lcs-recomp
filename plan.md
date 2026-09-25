# Plan: mejoras gráficas adicionales (DX12)

Continuación del plan de gráficos ya completado en la rama `screen` (fog, posproceso, FXAA,
iluminación, HDR, menú de dos páginas). Este plan añade lo que queda con mejor relación
resultado/esfuerzo.

## Contexto

El renderizador ya tiene: bloom, traducción general de mezclas, posproceso en la pasada de
presentación (nitidez, contraste, saturación, gamma, viñeta, FXAA), escala de iluminación,
distancia de fog, objetivos de color HDR opcionales y una página GRAPHICS en el menú.

Lo que sigue a continuación se centra en la calidad de las texturas y de los bordes, en la
presentación (VSync y salida HDR real) y en unos pocos efectos de imagen ligeros. Los efectos que
necesitan profundidad (SSAO, profundidad de campo) o ingeniería inversa del juego (reflejos en el
agua, sombras) quedan fuera a propósito.

## Orden de trabajo

| Fase | Tema | Esfuerzo | Riesgo |
|---|---|---|---|
| 1 | Escalado de texturas | medio | medio (memoria de vídeo y caché) |
| 2 | Alpha-to-coverage en follaje | bajo/medio | bajo |
| 3 | VSync | bajo | bajo (interacción con el limitador del juego) |
| 4 | Salida HDR10 / scRGB | medio | medio (depende de la pantalla) |
| 5 | Efectos ligeros: mezcla de fotogramas, grano, aberración cromática | bajo | bajo |
| 0 | Tercera página del menú (necesaria antes de exponer 1-5) | medio | medio |

La fase 0 se hace primero, o a la vez que la 1, porque la página GRAPHICS ya está llena.

## Fase 0: tercera página del menú

**Problema.** La página GRAPHICS tiene 13 opciones y la fila BACK, es decir 14 filas de las 14
permitidas (la última ranura debe quedar vacía porque el juego usa el ítem vacío como
terminador de la lista).

**Solución.** Generalizar `g_pages` de `lcs_menu.cpp` a N páginas:
- Añadir la página "EFFECTS" en otra pantalla en blanco (candidatas: 16, 18 o 19, subpáginas de
  multijugador vacías; la 15 ya se usa).
- La fila enlace de GRAPHICS pasa a ser `MORE EFFECTS`, y la nueva página lleva su propia fila
  `BACK` que vuelve a GRAPHICS.
- `Option::page` pasa a admitir 0, 1 y 2. Los textos de las filas de enlace (`FEX_MOR`, `FEX_BAK`,
  `FEX_GFX`, y las nuevas) se registran en `lcs_menu_text_override`.
- Comprobar que el botón ○ (atrás) y la fila BACK vuelven bien en las tres páginas.

**Archivos:** `lcs/host/lcs_menu.cpp`.

## Fase 1: escalado de texturas

**Idea.** Al decodificar cada textura del juego se amplía (2×) con un filtro que respeta los
bordes. Las texturas de PSP son muy pequeñas y al verlas a 1920×1088 se ven borrosas.

**Diseño.**
- Punto de enganche: `prepare_texture_upload` y la estructura `Dx12Texture` de
  `ge_gpu_backend_dx12.cpp`, donde ya se dispone de los píxeles RGBA8 decodificados por nivel de mip.
- Filtro en CPU sobre cada nivel: bicúbico con realce de bordes como primera versión, con la
  posibilidad de cambiar luego a un filtro tipo xBR/xBRZ. Nunca amplificar las paletas ni los
  atlas de HUD (texturas de fuentes y de interfaz), que deben seguir intactos: excluir por
  formato/tamaño o por una lista de exclusión configurable.
- Clave de la caché de texturas: incluir el factor de escala; ajustar el límite de
  `texture_cache_mb`, porque cada textura escalada ocupa 4 veces más memoria de vídeo.
- Trabajar en un hilo aparte o repartir la conversión entre fotogramas para no producir tirones al
  cargar zonas nuevas.

**Configuración.** `Rendering.TextureScale = Off | 2x` (menú: fila TEXTURE SCALE, requiere reiniciar).

**Verificación.** Capturas con y sin escalado de la misma escena (fachadas, carteles, asfalto).
Comprobar que las fuentes y el HUD no cambian, medir VRAM y tirones al cambiar de zona.

## Fase 2: alpha-to-coverage en follaje

**Idea.** Con MSAA, los bordes de árboles y vallas (alpha test) siguen con dientes porque el
shader descarta píxeles. La cobertura por alfa los suaviza.

**Diseño.**
- En el estado de pipeline (`create_pipeline`): si `draw.alpha_test_enabled` y `sample_count > 1`,
  activar `AlphaToCoverageEnable` y añadir un bit al `pipeline_key`.
- En el shader de píxel, para esas variantes no hacer `discard`: escribir en alfa un valor
  con transición estrecha alrededor de la referencia (por ejemplo
  `saturate((a - ref) / max(fwidth(a), 1e-3) + 0.5)`), para conservar el aspecto del alpha test
  pero con borde suave.
- Debe limitarse a funciones de alpha test "mayor que"/"mayor o igual que", que son las que usa
  el follaje; el resto sigue con `discard`.

**Configuración.** `Rendering.AlphaToCoverage = true|false` (por defecto true; sin efecto con MSAA 1X).

**Verificación.** MSAA 4X con la opción activada y desactivada, ampliando árboles y vallas.

## Fase 3: VSync

**Diseño.**
- `Rendering.VSync = Off | On`. En la presentación, `Present(0, tearing)` pasa a
  `Present(1, 0)` cuando está activo.
- Revisar la interacción con el limitador de fotogramas del juego (`Timing.FrameRate`): con VSync
  activo conviene que el limitador del host no acumule espera adicional.

**Verificación.** Comprobar con el contador de FPS que se ajusta al refresco de la pantalla y que
no aparecen tirones nuevos. Fila en el menú (aplica al instante o al reiniciar, según lo que
permita el swapchain).

## Fase 4: salida HDR10 / scRGB

**Idea.** Ya hay un buffer de 16 bits (`Rendering.HDR`). En pantallas HDR se puede enviar la imagen
real en vez de tonemapearla a SDR.

**Diseño.**
- Detectar si la salida es HDR (`IDXGIOutput6::GetDesc1`).
- Swapchain en `R16G16B16A16_FLOAT` con espacio de color scRGB
  (`DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709`) mediante `SetColorSpace1`, o HDR10 en
  `R10G10B10A2`; empezar por scRGB porque no necesita cuantizar.
- En `PresentPS`: en modo HDR de salida, saltarse `PresentTonemap` y escalar a nits con
  `PaperWhite` y limitar a `PeakNits`.
- Configuración: `Rendering.HDROutput`, `PaperWhite` (nits) y `PeakNits`.

**Riesgo.** Solo se puede comprobar con una pantalla compatible. Debe caer a SDR sin errores si
la salida no es HDR.

## Fase 5: efectos ligeros de imagen

Todos van en el shader de presentación (`ge_present_shader.hpp`), con constantes en el buffer
`PresentConstants` (queda libre `PostB.w` y se puede añadir un `PostC`).

- **Desenfoque de movimiento por mezcla de fotogramas.** Guardar el fotograma anterior en una
  textura del tamaño de la presentación y mezclarlo con un peso configurable
  (`Rendering.MotionBlur`, 0 a 0,8). Reiniciar el historial al cambiar de escena o en pausa para
  evitar estelas.
- **Grano de película** (`Rendering.FilmGrain`) y **aberración cromática**
  (`Rendering.ChromaticAberration`): pocas líneas cada uno, aplicables en vivo.

**Verificación.** Pantalla dividida con `LCS_POST_SPLIT` para comparar en el mismo fotograma.

## Reglas de trabajo

- Cada fase termina con compilación, arranque sin avisos, comprobación de que la consola dice
  `active=directx12` (una advertencia del compilador HLSL se trata como error y deja el juego en el
  renderizador por software sin avisar) y verificación con capturas de mi propia instancia.
- Nada de teclas ni clics simulados sobre el juego del usuario; el usuario prueba los menús.
- Las ediciones al código generado (`lcs/generated/`, ignorado por Git) se hacen mediante
  `lcs/scripts/apply_menu_hooks.py`.
- Un commit por fase, en inglés y sin línea de coautor. Nunca añadir `lcs/config/LCSNative.ini`.

## Fuera de alcance

SSAO, profundidad de campo, reflejos en el agua y sombras de mayor resolución: requieren acceso a la
profundidad (recurso sin tipo, lectura multimuestra y linealización con la proyección de la PSP) o
ingeniería inversa del juego, con poca ganancia visible para lo que cuestan.
