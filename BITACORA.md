# Bitácora de LeetCode

Fecha de organización inicial: **2026-09-15**. Las fechas originales de resolución no están confirmadas.

## Ejercicios

| ID | Ejercicio | Tema | Verificación local | Aceptación en LeetCode | Archivo |
| --- | --- | --- | --- | --- | --- |
| 1 | Two Sum | Hashing | Compilación sin advertencias; 6/6 pruebas temporales correctas (2026-09-26) | Solved en captura del 2026-09-26; panel de pruebas Accepted (3 casos, 0 ms), sin entrega completa visible | [Solución](hashing/0001-two-sum/solution.cpp) |
| 3 | Longest Substring Without Repeating Characters | Sliding window | 8/8 pruebas temporales correctas (2026-09-15) | Solved en captura del 2026-09-21; no se muestra una nueva entrega | [Solución](sliding-window/0003-longest-substring-without-repeating-characters/solution.cpp) |
| 49 | Group Anagrams | Hashing | Compilación sin advertencias; ejecución de pruebas bloqueada por Windows (2026-09-24) | Solved en captura del 2026-09-24; versión local no enviada | [Solución](hashing/0049-group-anagrams/solution.cpp) |
| 88 | Merge Sorted Array | Two pointers | 8/8 pruebas temporales correctas (2026-09-16) | Solved en captura; versión local no enviada | [Solución](two-pointers/0088-merge-sorted-array/solution.cpp) |
| 128 | Longest Consecutive Sequence | Hashing | Compilación sin advertencias (2026-09-24); sin ejecución local | Solved en captura del 2026-09-24; versión local no enviada | [Solución](hashing/0128-longest-consecutive-sequence/solution.cpp) |
| 217 | Contains Duplicate | Hashing | 13/13 pruebas correctas antes de retirar los archivos de pruebas | Accepted: 79/79 casos (2026-09-21), según captura | [Solución](hashing/0217-contains-duplicate/solution.cpp) |
| 242 | Valid Anagram | Hashing | 15/15 pruebas correctas antes de retirar los archivos de pruebas | No confirmada | [Solución](hashing/0242-valid-anagram/solution.cpp) |
| 1431 | Kids With the Greatest Number of Candies | Arrays and strings | 6/6 pruebas temporales correctas | Solved en captura; versión local no enviada | [Solución](arrays-and-strings/1431-kids-with-the-greatest-number-of-candies/solution.cpp) |
| 1768 | Merge Strings Alternately | Arrays and strings | 5/5 pruebas temporales correctas | Solved en captura; versión local no enviada | [Solución](arrays-and-strings/1768-merge-strings-alternately/solution.cpp) |
| 1929 | Concatenation of Array | Arrays and strings | 4/4 pruebas temporales correctas (2026-09-20) | Solved en captura; versión local no enviada | [Solución](arrays-and-strings/1929-concatenation-of-array/solution.cpp) |

La versión con tipos explícitos y bucles clásicos pasó las **28 pruebas** el **2026-09-15**, compilada con C++20 y `-Wall -Wextra -Wpedantic -Werror`, sin advertencias. Los archivos de pruebas se retiraron después de esa verificación para cumplir la estructura solicitada.

## Entregas y registros

### 2026-09-26 · 1 · Two Sum

- **Estado observado:** Solved; el panel de pruebas muestra Accepted en los tres casos de ejemplo y 0 ms. No se muestran un identificador ni métricas de una entrega completa.
- **Lenguaje y enfoque:** C++, una sola pasada con `unordered_map<int, int>` (valor -> índice). Para cada número se calcula `needed = target - nums[i]`; si ya está en el mapa se devuelven ambos índices, y si no, se guarda el número actual.
- **Clasificación:** `hashing`.
- **Archivo:** un único `solution.cpp` con descripción y ejemplos al inicio. Se conservaron el enfoque, los nombres y el `for` clásico de la captura; se añadieron comentarios en inglés.
- **Verificación local:** compilación con C++20 y `-Wall -Wextra -Wpedantic -Werror`, sin advertencias. Pasó 6 pruebas temporales fuera de la carpeta del ejercicio: los 3 ejemplos, negativos, ceros repetidos y par al final. Se retiraron los archivos temporales.

### 2026-09-24 · 128 · Longest Consecutive Sequence

- **Estado observado:** Solved; el panel de pruebas muestra Accepted, cinco casos marcados y 27 ms. No se muestran un identificador ni métricas de una entrega completa.
- **Lenguaje y enfoque:** C++, `unordered_set<int>` y recorridos `for (const auto& value : ...)` conservados como en la captura.
- **Clasificación:** `hashing`.
- **Archivo:** un único `solution.cpp`, con descripción y ejemplos al inicio, y los comentarios originales del usuario preservados.
- **Preferencia actualizada:** se eliminan las reglas de no usar `auto` y de convertir los recorridos en `for` clásicos. Se conserva la forma de los bucles entregados por el usuario.
- **Verificación local:** comprobación de compilación con C++20 y `-Wall -Wextra -Wpedantic -Werror`, sin advertencias. No se ejecutaron pruebas locales en este registro; los resultados visibles provienen de la captura.

### 2026-09-24 · 49 · Group Anagrams

- **Estado observado:** Solved; el panel de pruebas de la captura muestra Accepted en los tres casos visibles y 0 ms. No se muestran métricas de una entrega completa ni un identificador de entrega.
- **Lenguaje y enfoque:** C++, `unordered_map` con palabras ordenadas como claves y vectores de palabras originales como valores.
- **Clasificación:** `hashing`.
- **Archivo:** un único `solution.cpp` con descripción y ejemplos al inicio. Se conservó el texto de todos los comentarios del usuario; el recorrido final se escribió con un iterador explícito y `for` clásico para respetar la preferencia previa de no usar `auto`.
- **Feedback:** proporcionado únicamente en la conversación, según lo solicitado.
- **Verificación local:** compilación correcta con C++20 y `-Wall -Wextra -Wpedantic -Werror`. Se prepararon cinco casos temporales, pero Windows Application Control bloqueó el ejecutable, incluso al intentar ejecutarlo fuera del entorno restringido; no se registran como pruebas aprobadas. Se retiraron los archivos temporales.

### 2026-09-21 · 3 · Longest Substring Without Repeating Characters

- **Estado observado:** Solved en la captura del usuario. La fecha corresponde a este registro, no a una nueva aceptación confirmada.
- **Lenguaje y enfoque:** C++, ventana deslizante con `unordered_set<char>`. Cuando el carácter actual ya está en el conjunto, se eliminan caracteres desde la izquierda hasta resolver la repetición; después se inserta el carácter y se actualiza la longitud máxima.
- **Concepto clave:** después de eliminar las repeticiones, el tamaño del conjunto coincide con la longitud de la ventana. La captura usa `set.size()`; la solución local calcula la misma longitud como `right - left + 1`.
- **Clasificación:** `sliding-window`; utiliza hashing para consultar los caracteres presentes.
- **Problema:** [3 · Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/).
- **Evidencia disponible:** no se muestran una nueva entrega, cantidad de casos aprobados, tiempo de ejecución ni memoria. El panel de resultados indica que el código aún debe ejecutarse. Se conservan las 8 pruebas locales verificadas el 2026-09-15 como registro anterior.
- **Archivo:** se mantiene la solución existente, con el mismo enfoque, comentarios en inglés y nombres descriptivos.

### 2026-09-21 · 217 · Contains Duplicate

- **Resultado:** Accepted, 79/79 casos aprobados.
- **Hora mostrada:** 11:28, según la captura del usuario.
- **Lenguaje y enfoque:** C++, `unordered_set<int>`; consultar si el número ya existe antes de insertarlo.
- **Tiempo de ejecución:** 71 ms; supera al 60.42% según esa entrega.
- **Memoria:** 111.19 MB; supera al 73.94% según esa entrega.
- **Entrega:** [2148933891](https://leetcode.com/problems/contains-duplicate/submissions/2148933891/).
- **Fuente:** captura proporcionada por el usuario. Las métricas corresponden a esa entrega, no a una nueva ejecución local. El archivo existente conserva el mismo enfoque, con tipos explícitos, comentarios en inglés y comparación explícita de `count()` con cero.

## Conceptos para repasar

- **1:** consultar el complemento `target - nums[i]` antes de insertar el número actual evita usar el mismo elemento dos veces y resuelve duplicados como `[3,3]`. Tiempo O(n) y espacio O(n).
- **3:** la ventana conserva caracteres únicos; se mueve su extremo izquierdo hasta eliminar la repetición antes de añadir el carácter actual.
- **88:** solo los primeros `m` elementos de `nums1` son datos de entrada. Dos índices comparan los mayores valores pendientes; un tercer índice escribe desde el final para no sobrescribir valores por procesar. Al agotarse `nums2`, el resto de `nums1` ya está colocado. Tiempo O(m + n) y espacio adicional O(1).
- **217:** un conjunto almacena valores únicos. `count()` devuelve 0 o 1; hay que consultar antes de insertar el número actual.
- **242:** un mapa relaciona cada letra con su contador. `operator[]` inicializa en cero el contador de una clave nueva.
- **242:** sumar apariciones de una cadena y restar las de la otra permite comparar frecuencias. Con longitudes iguales, basta verificar los saldos de las letras de la primera cadena.
- **1431:** se compara a cada niño de forma independiente y se permiten empates en la mayor cantidad. Se conserva la comparación mediante dos bucles.
- **1768:** cada cadena se comprueba por separado antes de acceder a su posición; así también se añaden los caracteres restantes de la cadena más larga.
- **1929:** la segunda mitad del resultado reutiliza los índices del arreglo original mediante `i - n`. `push_back()` añade cada valor sin modificar `nums`. Tiempo O(n) y espacio O(n) para el resultado.

Estos son conceptos del código revisado, no dificultades personales atribuidas al usuario. Las explicaciones específicas están en los comentarios de cada solución.

## Pendientes

- Registrar la aceptación en LeetCode cuando exista confirmación o evidencia verificable.
- Incorporar dudas y aprendizajes personales conforme los compartas.
- Añadir los próximos ejercicios con la estructura de un único `.cpp`.

## Historial

- **2026-09-26:** se añadió el ejercicio 1 en `hashing` a partir de la captura, conservando su enfoque con mapa hash. Se actualizaron el índice y la bitácora; compiló sin advertencias y pasó 6 pruebas temporales.
- **2026-09-24:** se añadió el ejercicio 128 en `hashing`, manteniendo sus comentarios y ambos `for (const auto& value : ...)`. Se actualizó la preferencia de estilo en `AGENTS.md` y el índice; la comprobación de compilación pasó sin advertencias.
- **2026-09-24:** se añadió el ejercicio 49 en `hashing`, conservando los comentarios del usuario y su enfoque. Se actualizaron el índice y la bitácora; la solución compila sin advertencias, pero Windows bloqueó la ejecución de las pruebas temporales.
- **2026-09-21:** se añadió un registro del ejercicio 3 a partir de una nueva captura con estado Solved y solución de ventana deslizante con conjunto. Se conservó su carpeta en `sliding-window` y el código existente; la captura no muestra resultados de una nueva ejecución o entrega.
- **2026-09-21:** se registró una entrega aceptada del ejercicio 217, con 79/79 casos, 71 ms y 111.19 MB, verificada en la captura. Se actualizó la aceptación del ejercicio existente sin crear otra carpeta ni cambiar su solución.
- **2026-09-20:** se añadió el ejercicio 1929 desde la captura, conservando el recorrido de `2n` posiciones y la selección entre `nums[i]` y `nums[i - n]`. Se registró en `arrays-and-strings` con un solo `solution.cpp` y comentarios en inglés. Compiló sin advertencias con C++20, `-Wall -Wextra -Wpedantic -Werror` y comprobaciones de acceso de la biblioteca estándar. Pasó 4 pruebas temporales: los dos ejemplos, un solo elemento y dos valores distintos; también se comprobó que no modifica la entrada.
- **2026-09-16:** el ejercicio 88 reemplaza el vector auxiliar y `sort()` por una fusión desde el final con dos índices. Se trasladó a `two-pointers`, manteniendo comentarios en inglés, `for` clásico y decrementos separados. Compiló sin advertencias con C++20, `-Wall -Wextra -Wpedantic -Werror` y comprobaciones de acceso de la biblioteca estándar; pasó 8 pruebas temporales, incluidos los 3 ejemplos y casos con arreglos agotados, repetidos, negativos y ceros.
- **2026-09-15:** organización inicial de los dos ejercicios con soluciones, pruebas, notas y respaldo de originales.
- **2026-09-15:** simplificación solicitada: un solo `solution.cpp` por ejercicio; descripción y ejemplos al inicio; comentarios de conceptos importantes; tipos explícitos y `for` clásicos. Se prioriza la legibilidad. Se actualizó la tarea de VS Code para comprobar sintaxis sin producir ejecutables.
- **2026-09-15:** todos los comentarios de las soluciones se tradujeron al inglés y se guardó esta preferencia. El respaldo de la estructura anterior se eliminó por solicitud del usuario.
- **2026-09-15:** se añadieron 3, 88, 1431 y 1768 a partir de las capturas, manteniendo sus enfoques. Las cuatro soluciones compilaron con C++20 y `-Wall -Wextra -Wpedantic -Werror`, sin advertencias, y pasaron 25 pruebas temporales fuera de las carpetas de ejercicios. Se verificaron los 12 ejemplos de las capturas y 13 casos adicionales. Cada carpeta conserva únicamente `solution.cpp`.
