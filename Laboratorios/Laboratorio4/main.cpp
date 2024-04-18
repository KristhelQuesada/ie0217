#include "Funciones.hpp"

/*
Main Function
Aca se prueban las distintas funciones definidas e implementadas en los
archivos "Funciones.hpp" y "Funciones.cpp" respectivamente.
*/

int main() {
    // Inicializamos el tamanio del arreglo y el arreglo
    const int SIZE = 10000;
    int arr[SIZE];

    // Llamamos a las funciones de tal manera que siempre se genere un
    // nuevo arreglo y asi evitar aplicar el algoritmo de ordenamiento
    // sobre un arreglo ya ordenado
    generateRandomARray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");

    generateRandomARray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");

    generateRandomARray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");

    generateRandomARray(arr, SIZE);
    measurinQuickgSortTime(quickSort, arr, 0, SIZE-1, "Quick Sort");

    return 0;
}