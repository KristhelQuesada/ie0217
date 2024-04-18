#include "Funciones.hpp"


// Drivers code
int main() {
    const int SIZE = 10000;
    int arr[SIZE];

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