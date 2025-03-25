# ⏳ Complejidad Algorítmica  

La **complejidad algorítmica** es una medida del rendimiento de un algoritmo en función del tamaño de la entrada. Nos ayuda a determinar qué tan eficiente es una solución y si puede ejecutarse en un tiempo razonable dentro de los límites de una competencia o sistema real.  

## 📌 ¿Cómo se usa?  

Cuando diseñamos o analizamos un algoritmo, debemos considerar su **complejidad temporal**, que nos indica cuántas operaciones ejecutará en función del tamaño de la entrada (**n**).  

Las notaciones más comunes para expresar la complejidad de un algoritmo son:  

- **O(1):** Tiempo constante (independiente de la entrada).  
- **O(log n):** Logarítmico, como la búsqueda binaria.  
- **O(n):** Lineal, como recorrer un arreglo una vez.  
- **O(n log n):** Común en algoritmos eficientes de ordenamiento como Merge Sort.  
- **O(n²), O(n³):** Cuadrático y cúbico, típicos en algoritmos de fuerza bruta.  
- **O(2ⁿ), O(n!):** Complejidades exponenciales y factoriales, generalmente inviables para valores grandes de **n**.  

## ⚡ ¿Por qué es importante?  

En programación competitiva, los problemas suelen tener restricciones de tiempo, generalmente **1 o 2 segundos**. Si un algoritmo es demasiado lento, no será aceptado.  

Una **estimación clave** para saber si nuestro algoritmo es viable es calcular cuántas **operaciones** se realizarán en el peor caso y compararlas con la cantidad de **operaciones por segundo** que una computadora puede manejar.  

## 🧮 ¿Cómo calcular si entra en tiempo?  

En C++, una estimación de operaciones por segundo es aproximadamente:  

5e8 / 500,000,000 operaciones por segundo


Para determinar si nuestro algoritmo es eficiente, usamos la siguiente fórmula:  

$$
\frac{\text{Tamaño máximo de entrada} \times \text{Complejidad del algoritmo}}{\text{Operaciones por segundo}}
$$

Si el resultado es menor o cercano a **1 segundo**, nuestro algoritmo probablemente será aceptado.  

### 📌 Ejemplo  

Si tenemos un problema con **n = 10⁶** y nuestro algoritmo tiene **O(n log n)** de complejidad:  

$$
\frac{10^6 \times \log_2(10^6)}{5 \times 10^8} \approx \frac{10^6 \times 20}{5 \times 10^8} = \frac{2 \times 10^7}{5 \times 10^8} = 0.04 \text{ segundos}
$$

Este algoritmo es eficiente y entraría en tiempo.


---

## 🎯 Actividad  

El objetivo principal de esta actividad es **analizar problemas** y estimar si nuestras soluciones entrarían en tiempo usando la complejidad algorítmica. No es obligatorio resolverlo, aunque es un extra.  

### 📌 Instrucciones  

1. **Piensa en una posible solución** para cada uno de los problemas listados a continuación. No importa si no es la más óptima.  
2. **Calcula la complejidad de tu solución** y usa la fórmula explicada arriba para verificar si entraría en tiempo.  
3. **(Opcional)** Si logras implementar y resolver el problema con código, ¡es un punto extra! Pero el enfoque principal es el análisis.  

**Nota: Algunos de las soluciones ya se encuentran en esta carpeta del repositorio con el nombre del problema, de igual manera puedes aportar agregando tu solución**
**[Soluciones](Soluciones)**

### 📌 Problemas  

1. [Resta interminable](https://omegaup.com/arena/problem/Resta-Interminable)  
2. [Ordenar](https://omegaup.com/arena/problem/Ordenar)  
3. [Oro del sabio](https://omegaup.com/arena/problem/Oro-del-sabio)
4. [Acomoda el número](https://omegaup.com/arena/problem/AcomodandoOMI)  
5. [Acechando igualdades 2](https://omegaup.com/arena/problem/Achecando-Igualdades-2) 
6. [Maximizando puntos](https://omegaup.com/arena/problem/Maximizando-Puntos) 

---

## 📚 Recursos Extras  

- [Presentación de la clase](https://sites.google.com/view/cpcfmat-uady/entrenamientos/análisis-de-complejidad?authuser=0) 
- [Guía sobre Complejidad Algorítmica en Geeks for Geeks](https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/)  