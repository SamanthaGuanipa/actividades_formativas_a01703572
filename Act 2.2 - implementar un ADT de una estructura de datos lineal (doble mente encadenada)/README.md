#toStringForward

**Analisis de complejidad temporal**

Debido a que el algoritmo recorre la lista, depende de la longitud de la misma para terminar y por ende la complejidad es de O(n)

#toStringBackward

**Analisis de complejidad temporal**

Al igual que el algoritmo anterior, nada mas que a la inversa (empezando por la cola de la lista), depende de la longitud de la lista y por eso igual es de complejidad O(n)

#insertion

**Analisis de complejidad temporal**

El algoritmo siempre hace la misma cantidad de pasos para agregar un objeto a la lista hasta el final, no importa el tamanio de la lista ni el valor o el objeto que se desee agregar. Como siempre hace el mismo numero de pasos la complejidad es de O(1)

#search

**Analisis de complejidad temporal**

Al buscar el valor deseado el alroritmo recorre la lista hasta encontrarlo y de no estar, al finalizar la lista devuelve -1, como depende del tamanio de la lista la complejidad es de O(n)

#update

**Analisis de complejidad temporal**

Al igual que el algoritmo pasado recorremos la lista buscando en este caso no el valor deseado si no hasta llegar a la posicion deseada, una vez ahi cambiamos el valor del objeto al nuevo valor ingresado. Como recorremos la lista y dependemos del tamanio de la misma la complejidad es de O(n)

#deleteAt

**Analisis de complejidad temporal**

Al igual que los dos algoritmos pasados vamos recorriendo la lista hasta encontrar el objeto a eliminar en la posicion deseada, igual como dependemos del tamanio de la lista la complejidad es O(n)