#include <iostream>
using namespace std;

/*
DESCRIPCION: Insertion sort
Este programa introduce el algoritmo de ordenamiento Selection Sort con
base en la diapositiva 12 de la presentacion. Este algoritmo consiste en
tomar cada elemento del arreglo de ta forma que lo inserta en su posicion
correcta.

Para ello, se parte del primer elemento y lo compara con el elemento que
este a su izquierda, luego agarramos el nuevo elemento de la derecha del
primer numero seleccionado o comparado y preguntamos si los anteriores son
menores o mayores, tal que su desplazamiento no se realice o se realice 
hacia la izquierda.

En resumen, se comparar dos numero y el menor se desplaza hacia la izquierda
donde comparandose siempre con otro elemento hasta que este ya no sea el
menor, en ese instante adopta la posicion actual.

Esto se busca mediante la implementacion de un key o una variable temporal
que contendra la informacion del menor. Inicialmente se comparan los dos
primeros elementos, donde el menor entre ellos ira en el key. Luego, par-
tiendo del menor hacia la izquierda, se ompara cada numero con el key de
tal forma que se desplacen aquellos mayores hacia la derecha. Luego el pro-
ceso se repite y ademas, cada step estara asociado al indice de incio siem-
pre y cuando el step se inicialice en 1. poque se asume que en el step cero,
ya ese elemento estaba ordenado.

Su tiempo de complejidad de manera ordenada es lineal, mas de lo contrario
es cuadratica. Y su complejidad de almacenamiento es una capacidad constan-
te de memoria pues no estamos asignando memoria dinamicamente.

*/

// function to print an array
void printArray(int array[], int size) {
    for (int i=0; i<size; ++i) {
        cout << " " << array[i];
    }
    cout << endl;
}

// Insertion sort function
void insertionSort(int array[], int size) {
    // Desde el step 1 hasta el tamanio, por cada step realizado actualizamos 
    // su valor a step + 1
    for (int step = 1; step < size; step++) {

        // Definimos el key value inicialmente con el valor en la posicion
        // proporcional al step que estemos trabajando
        int key = array[step];

        // Numero de comparaciones que vamos a hacer
        // Si es la inicial j=0 por tanto implica una iteracion
        // Si es la segunda j=1, por tanto hace iteracion j=1 y j=0 (2 iteraciones)
        // ... asi sucesivamente
        int j = step - 1;

        // Compare key with each element on the left
        // of it until an element smaller than it is
        // found.
        // For descending order, change key<array[j] to key>array[j]
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j]; // realiza el desplazamiento a la derecha

            --j; // aca se actualiza j para ir recorriendo elemento por
                 // elemento hasta cumplir que key es menor que el numero
                 // que alberga el array en ese instante j
        }

        array[j + 1] = key; // inserta el key en su posicion correcta
    }
}

// Driver code
int main() {
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);

    cout << " Sorted array in ascending order:\n";
    printArray(data, size);
}