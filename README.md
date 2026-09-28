# LeetCode · Código y bitácora

## Organización

```text
leetcode/
├── AGENTS.md                Instrucciones y preferencias de código
├── BITACORA.md              Progreso y pendientes
├── LeetCode.code-workspace  Espacio de VS Code
├── .vscode/                Configuración del editor
└── <tema>/
    └── <número>-<nombre>/
        └── solution.cpp    Descripción, ejemplos, conceptos y solución
```

Cada ejercicio contiene un único archivo `.cpp`, con la descripción y ejemplos de LeetCode en comentarios al principio. Todos los comentarios están en inglés y explican los conceptos importantes del programa.

Se conservan los comentarios y los bucles `for` proporcionados por el usuario, incluidos los que usan `auto` o recorren directamente un contenedor. La legibilidad tiene prioridad sobre las microoptimizaciones; las sugerencias se dan en la conversación.

## Ejercicios

| Ejercicio | Tema | Archivo |
| --- | --- | --- |
| 1 · Two Sum | Hashing | [Solución y comentarios](hashing/0001-two-sum/solution.cpp) |
| 3 · Longest Substring Without Repeating Characters | Sliding window | [Solución y comentarios](sliding-window/0003-longest-substring-without-repeating-characters/solution.cpp) |
| 49 · Group Anagrams | Hashing | [Solución y comentarios](hashing/0049-group-anagrams/solution.cpp) |
| 88 · Merge Sorted Array | Two pointers | [Solución y comentarios](two-pointers/0088-merge-sorted-array/solution.cpp) |
| 128 · Longest Consecutive Sequence | Hashing | [Solución y comentarios](hashing/0128-longest-consecutive-sequence/solution.cpp) |
| 217 · Contains Duplicate | Hashing | [Solución y comentarios](hashing/0217-contains-duplicate/solution.cpp) |
| 242 · Valid Anagram | Hashing | [Solución y comentarios](hashing/0242-valid-anagram/solution.cpp) |
| 1431 · Kids With the Greatest Number of Candies | Arrays and strings | [Solución y comentarios](arrays-and-strings/1431-kids-with-the-greatest-number-of-candies/solution.cpp) |
| 1768 · Merge Strings Alternately | Arrays and strings | [Solución y comentarios](arrays-and-strings/1768-merge-strings-alternately/solution.cpp) |
| 1929 · Concatenation of Array | Arrays and strings | [Solución y comentarios](arrays-and-strings/1929-concatenation-of-array/solution.cpp) |

Los ejercicios se clasifican según el enfoque guardado. El 88 fusiona desde el final con dos índices de lectura y pertenece a `two-pointers`. El 1768 recorre ambas cadenas con un índice común y está en `arrays-and-strings`. El 3 mantiene una ventana y pertenece a `sliding-window`. El progreso y los pendientes se registran en [BITACORA.md](BITACORA.md).

## Trabajar en VS Code

1. Abre `LeetCode.code-workspace`.
2. Abre el `solution.cpp` del ejercicio.
3. Usa **Ctrl+Shift+B** para comprobar la sintaxis con C++20, sin generar un ejecutable.
4. Copia el código en LeetCode para ejecutarlo o enviarlo.

La tarea utiliza `C:/msys64/ucrt64/bin/g++.exe`. Las soluciones contienen la clase `Solution` sin `main`, por lo que no son programas independientes para ejecutar con F5.

## Estudio y registro

Las conclusiones de estudio que compartas se incorporan a los comentarios del ejercicio y, cuando corresponda, a la bitácora. No se supone una sincronización automática con otros chats o copias subidas.

La prueba anterior del 217 en `../practice/leetcode1/leetcode1.cpp` permanece fuera de este proyecto. La carpeta principal del ejercicio es `hashing/0217-contains-duplicate`.
