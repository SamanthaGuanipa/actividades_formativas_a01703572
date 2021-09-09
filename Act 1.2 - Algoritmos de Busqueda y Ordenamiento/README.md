#ordena Seleccion

**Análisis de complejidad temporal**

Este algoritmo consta de dos ciclos for anidados que van recorriendo el arreglo para seleccionar el valor, en este caso el menor, y lo intercalan con el espacio que toca en esa iteracion y chequeo del arreglo, como revisa el arreglo diversas veces dependiendo el numero de valores, la complejidad del algoritmo es de O(n^2)

#ordena Burbuja

**Análisis de complejidad temporal**

El algoritmo consta de dos ciclos for anidados los cuales van revisando el arreglo tomando el valor mas grande que va encontrando y llevandolo hasta el final una y otra vez, como hace este proceso de revision una y otra vez dependiendo la cantidad de valores (recorre el arreglo n cantidad de veces dependiendo el numero de valores del mismo) su complejidad es de O(n^2)

#ordena Merge

**Análisis de complejidad temporal**

Como el algoritmo divide por mitades el arreglo usando recursividad y luego lo va juntando ordenandolo de manera correcta su complejidad es de O(n^2)

#busq Secuencial

**Análisis de complejidad temporal**

El algoritmo compara el valor que se intenta encontrar con cada valor en el arreglo dado, debido a que el numero de pasos depende completamente del tamanio del arreglo, la complejidad es O(n)

#busqueda Binaria

**Análisis de complejidad temporal**

El algoritmo va dividiendo el arreglo a la mitad una y otra vez reduciendo entre dos los pasos que tiene que hacer una y otra vez. Por lo tanto el algoritmo de complejidad es O(log n)