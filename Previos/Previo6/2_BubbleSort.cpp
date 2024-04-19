#include <iostream>
using namespace std;

/*
DESCRIPCION> Optimized bibble sort in C++
Este programa continua con la explicacion del funcionamiento del al-
goritmo de ordenamiento Bubble Sort con base en la diapositiva 5 de
la presentacion. La diferencia de este archivo con el anterior es que
se crea una variable llamada swapped para verificar si cambia o no en
cada iteracion. De tal forma, que actua como una bandera para donde
al ponerse dicha variable en cero, se notifica que ya no se registraron
mas cambios y por ende detiene la ejecucion en este punto para evitar
hacer mas ejecuciones de las necesarias.
*/

// Function to perform bubble sort
void bubbleSort(int array[], int size) {

    // loop to access each array element
    for (int step = 0; step < size; ++step) {

        // check if swapping occurs
        int swapped = 0;

        // loop to compare array elements
        for (int i = 0; i < (size-step-1); ++i) {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i+1]) {

                // swapping elements if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

                // Para que si para antes de empezar la siguiente
                // iteracion. Luego, si la variable intercambiada
                // estaba en cero, significa que no se hizo ningun
                // intercambio, lo cual implica que el arreglo ya
                // esta llenado
                swapped = 1;
            }
        }

        // no swapping means the array is already sorted
        // so no need of further comparison

        // Se aplica para quebrar el ciclo for y asi evitamos
        // realizar iteraciones innnecesarias
        if (swapped == 0) break;
    }
}

// De aca en adelante, todo se mantiene igual
// Function to print an array
void printArray(int array[], int size) {
    for (int i=0; i<size; ++i) {
        cout << " " << array[i];
    }
    cout << endl;
}

// Driver function
int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // find array's length
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);

    // print all the info
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);

    return 0;
}