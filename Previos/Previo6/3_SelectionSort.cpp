#include <iostream>
using namespace std;

/*
DESCRIPCION: Selection sort in C++
Este programa introduce el algoritmo de ordenamiento Selection Sort con
base en la diapositiva 9 de la presentacion. Este algoritmo consiste en
hallar el menor numero del arreglo mediante steps donde cada iteracion
se encarga de buscarlo comparando con el elemento de la par. Entonces:

- Una vez se recorre todo el arreglo mediante iteraciones, se determina
el numero menor.
- Luego, la posicion de ese numero sera intercambiada con la primera po-
sicion del arreglo (para el caso de step=0).
- Posteriormente, se pasa al step=1, se realiza el mismo procedimiento
partiendo del step=1 hasta recorrer todo el array.
- Al encontrar el numero entonces se puede decir que la logica de cambio
generalizada esta dada por:
    || Las iteraciones parte de array[step]
    ... hasta encontrar minValue y de ahi...    
    || minValue -> pasa a la posicion de array[step]

Se dice que su tiempo de complejidad es O(n) cuadrada porque siempre
recorremos de manera completa, es decir, realizamos una cantidad finita
de iteraciones, donde esta no es constante sino dependiente del tamanio
de la entrada de forma cuadratica.
*/

// function to swap the position of two elements
// Se reciben punteros
void swap(int *a, int *b) {
    int temp = *a; // crea una variable auxiliar que almacena el contenido de "a"
    *a = *b; // pasa el contenido de "b" al puntero "a"
    *b = temp; // pasa el contenido de "a" al puntero "b" con la variable auxiliar
}

// function to print an array
void printArray(int array[], int size) {
    for (int i=0; i<size; ++i) {
        cout << " " << array[i];
    }
    cout << endl;
}

void selectionSort(int array[], int size) {
    // size - 1 porque el indice debe ser porporcional al paso que
    // estemos dando
    for (int step=0; step < size-1; step++) {
        
        // Indice menor, indice que determina la posicion desde donde
        // empezamos la iteracion
        int min_idx = step;

        // Entonces, desde el indice (step+1) hasta su tamanio para que
        // array[min_idx] que es el minimo actual sea comparado con su
        // elemento a la derecha
        for (int i = step + 1; i < size; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimun element in each loop.

            // Entonces si el minimo actual es mayor al numero que esta
            // a la derecha, significa que ese numero a la derecha es
            // el nuevo minimo y por ende min_idx adquiere esta posicion
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }

        }

        // Put min at the correct position
        swap(&array[min_idx], &array[step]);
    }
}

// Driver code
int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);

    selectionSort(data, size);

    cout << " Sorted array in ascending order:\n";
    printArray(data, size);
}