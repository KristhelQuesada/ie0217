#include <iostream>
#include <cstdlib>
using namespace std;

/*
DESCRIPCION
En este programa se continua con el estudio de la memoria dinamica
con base en la diapositiva 7 de la presentacion. En el programa an-
terior se explico el uso de malloc, calloc y free, en este caso, nos
vamos a enfocar en el uso de realloc.
*/

int main() {
    // Declare float pointers
    float *ptr, *new_ptr;

    // Allocate memory from float size to float pointer
    // we use 5 because we want to have 5 elements
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
    /* La sintaxis va de tal forma que como parametros se pasa:
    - La direccion que queremos modificar
    - El nuevo tamanio: en este caso teniamos para 5 elementos
    pero ahora modificamos para 10. 10 bytes de tamanio float.
    */
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float));

    // Sanity check 2
    if (new_ptr == NULL) {
        cout << "Memory re-allocation failed";
        exit(1);
    }

    // Initializing reallocated memory block
    for (int i=5; i < 10; i++) {
        new_ptr[i] = i*2.5;
    }

    // Displaying values
    cout << "\nPrinting values after reallocating:" << endl;
    for (int i=0; i < 10; i++) {
        cout << new_ptr[i] << endl;
    }

    // Free memory block
    free(new_ptr); // se libera the last reallocation

    return 0;
}