#include <iostream>
using namespace std;

/*
DESCRIPCION> Optimized bibble sort in C++


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

                swapped = 1;
            }
        }

        // no swapping means the array is already sorted
        // so no need of further comparison
        if (swapped == 0) break;
    }
}

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