#include <iostream>
#include <cstdlib>
using namespace std;

/*
DESCRIPCION
En este programa se continua con el estudio de la memoria dinamica
con base en la diapositiva 7 de la presentacion.
*/

int main() {
    // Declare float pointers
    float *ptr, *new_ptr;

    // Allocate memory from float size to float pointer
    ptr = (float*) malloc(5 * sizeof(float));

    // Sanity check
    if (ptr == NULL) {
        cout << "Memory allocation failed";
        exit(1);
    }

    // Initializing memory block
    for (int i=0; i < 5; i++) {
        ptr[i] = i*1.5;
    }

    // Reallocating memory
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float));

    // Sanity check 2
    if (new_ptr == NULL) {
        cout << "Memory re-allocation failed";
        exit(1);
    }

    // Initializing reallocated memory block
    for (int i=0; i < 5; i++) {
        ptr[i] = i*1.5;
    }

    // Free memory block
    free(new_ptr);

    return 0;
}