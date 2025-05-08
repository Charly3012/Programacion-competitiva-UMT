# 🔍 Clase 1: Búsqueda Binaria

## 🎯 Objetivo de la clase

En esta clase aprenderás qué es la búsqueda binaria, cuándo se puede aplicar, y cómo implementarla correctamente. Es una técnica esencial en programación competitiva porque permite resolver problemas en **tiempo logarítmico (O(log n))**, lo cual es mucho más rápido que recorrer todo el arreglo.



## 🧠 ¿Qué es la Búsqueda Binaria?

Es un algoritmo eficiente para **buscar un valor** dentro de una estructura ordenada, como un arreglo ascendente. En lugar de revisar cada elemento uno por uno, **divide el problema a la mitad en cada paso**, descartando la mitad del espacio de búsqueda.

> Solo funciona si los datos están ordenados.

## 📌 Intuición con ejemplo

Supongamos que tienes el siguiente arreglo ordenado: [2, 4, 7, 10, 14, 19, 23]

Queremos saber si el número `10` está en el arreglo.

1. Buscamos el elemento en la mitad → `mid = 14`
2. Como `10 < 14`, descartamos la mitad derecha
3. Ahora buscamos entre `[2, 4, 7, 10]`
4. Mitad → `7`, y `10 > 7`, descartamos izquierda
5. Siguiente mitad → `10`, ¡éxito!



## 🧩 Casos clásicos de aplicación

### ✅ 1. Buscar un número en un arreglo ordenado

Determinar si un número `x` está presente en el arreglo.

### ✅ 2. Encontrar la posición de inserción

Usar `lower_bound` o `upper_bound` para encontrar dónde deberías colocar un número si no está.

### ✅ 3. Búsqueda binaria sobre la respuesta (más avanzada)

En problemas donde no hay arreglo explícito, pero puedes **verificar si una respuesta es válida**, puedes buscar en un rango de respuestas posibles.

> Ejemplo: "Encuentra el menor valor `x` tal que puedas hacer una tarea en menos de `x` tiempo."

## 📚 Problemas propuestos
- [Los libros de santy 1](https://omegaup.com/arena/problem/Los-libros-de-Santy-1)
- [Jardines botanicos](https://omegaup.com/arena/problem/Jardines-Botanicos/)
- [Pareja que suma K](https://omegaup.com/arena/problem/SumaParejaK)
- [Torneo de lanzamiento de objetos](https://omegaup.com/arena/problem/Torneo-de-Lanzamiento-de-Objetos/)
- [Comprador de bloques](https://omegaup.com/arena/problem/Comprador-de-Bloques)
- [Estadistica](https://omegaup.com/arena/problem/Comprador-de-Bloques)