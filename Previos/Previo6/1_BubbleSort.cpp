#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa introduce el algoritmo de ordenamiento Bubble Sort con
base en la diapositiva 4 de la presentacion. Se dice que este es un
algoritmo de ordenamiento que compara elementos adyacentes para inter-
cambiarlos si su orden no es el correcto. El algoritmo deja de ejecu-
tarse en el instante que no hayan m[as intercambios que realizar.

Usualmente, se haran saltos donde cada uno de estos contiene itera-
ciones comparativas. La cantidad de saltos esta determinada por el
numero de elementos que tenga en arreglo (5 elementos implican 4 sal-
tos), mientras que las iteraciones se iran reduciendo conforme se
ejecuten mas saltos.
*/

// Function to perform bubble sort
// La funcion recibe un arreglo y un tamanio
// Como no se pasa la referencia, cualquier cambio que realicemos aca,
// vamos a estar modificando el arreglo original por consecuencia.
void bubbleSort(int array[], int size) {

    // Este ejemplo no tiene una logica de optimizacion para que pare si
    // ya la lista esta ordenada. Por eso realizamos un loop de cero a
    // size-1, que se encarga de simular los saltos, es decir, hacer to-
    // dos los recorridos.


    // loop to access each array element
    for (int step = 0; step < size; ++step) {

        // loop to compare array elements
        
        // Comparamos desde 0 hasta el tamanio menos la iteracion porque
        // nos permite realizar el total de comparaciones.

        // Aca se hizo una correccion en el codigo de la presentacion pues
        // hacia falta un -1 en la condicion de parada
        for (int i = 0; i < (size-step-1); ++i) {

            // compare two adjacent elements
            // change > to < to sort in descending order

            // Pregunta si array[i] es mayor al siguiente
            if (array[i] > array[i+1]) {

                // swapping elements if elements
                // are not in the intended order

                // Entonces crea una variable temporal para sostener el
                // valor de array[i], pasa el valor menor a la posicion
                // del mayor y luego asigna en la posicion sobrante, el
                // elemento mayor
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int array[], int size) {

    // Recorre cada elemento del array
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << endl;
}

// Driver function
int main() {
    // Inicializamos un array de datos
    int data[] = {-2, 45, 0, 11, -9};

    // find array's length

    /* La sintaxis para hallar el tamanio es la siguiente:
    - Primero saca el tamanio del arreglo data, como son cinco elementos
    tipo entero (4 bytes) y son 5, su tamanio es 20.
    - Luego, se divide entre el tamanio del primer elemento, que es un
    entero, por ende 20/4=5 elementos
    
    */
    int size = sizeof(data) / sizeof(data[0]);

    // Se llama al algoritmo, con data por referencia y el tamanio
    bubbleSort(data, size);

    // print all the info
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);

    return 0;
}