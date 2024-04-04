#include <iostream>
#include <cstdlib>
using namespace std;

/*
DESCRIPCION
En este programa se continua con el estudio de la memoria dinamica
con base en la diapositiva 6 de la presentacion. En este caso se
exploran los conceptos de los operadores:

Asignan un bloque de memoria en el heap y devuelven un puntero void*
al inicio de la memoria asignada
- malloc
- calloc: inicializa en cero

Cambia el tamanio de un bloque de memoria asigando por malloc o calloc,
redimensiona el bloque existente o asigna uno nuevo y devuelve un pun-
tero al nuevo bloque de memoria
- realloc

Liberia memoria previamente asignada por los malloc, calloc o realloc,
ayuda a evitar fugas de memoria al liberar recursos.
- free:
*/

int main() {
    // First Example: Use of malloc
    // Allocate memory of int size to an int pointer
    int* ptr = (int*) malloc(sizeof(int));

    // Assign the value 5 to allocated memory
    *ptr = 5;

    // Display info
    cout << *ptr; // Output: 5

    // Free memory
    delete ptr;



    // Second Example: Use of calloc
    // Declare int pointer
    int *ptr2;

    // Allocate memory of int size to an int pointer
    ptr = (int*) calloc(5, sizeof(int));

    // Sanity check
    if (!ptr2) {
        cout << "Memory Allocation failed";
        exit(1);
    }

    // Initializing values
    cout << "Initializing values ..." << endl
         << endl;

    for (int i=0; i < 5; i++) {
        ptr2[i] = i * 2 + 1;
    }

    // Display values
    for (int i=0; i < 5; i++) {
        // * ptr[i] and *(ptr+i) are the same
        cout << *(ptr2 + i);
    }

    free(ptr2)



    return 0
}