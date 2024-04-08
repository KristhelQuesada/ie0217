#include <iostream>
#include <cstdlib>
using namespace std;

/*
DESCRIPCION
En este programa se continua con el estudio de la memoria dinamica
con base en la diapositiva 6 de la presentacion. Ya vimos en el pro-
grama pasado como asignarles a variables, arrays y objetos una di-
reccion en la memoria dinamica. En este caso, exploraremos 4 maneras
de asignar memoria, liberarla o reasignarla mediante 4 funciones que
pertenecen a la libreria estandar. Por tanto, se exploran los concep-
tos de los siguientes operadores:

Asignan un bloque de memoria en el heap y devuelven un puntero void*
al inicio de la memoria asignada
- malloc: m(emory)alloc
- calloc: inicializa en cero, es decir, si en ese espacio habia basura,
la limpia. Sin embargo, es mas caro a nivel computacional porque tiene
que ir a poner todo en cero.

Cambia el tamanio de un bloque de memoria asigando por malloc o calloc,
redimensiona el bloque existente o asigna uno nuevo y devuelve un pun-
tero al nuevo bloque de memoria
- realloc

Liberia memoria previamente asignada por los malloc, calloc o realloc,
ayuda a evitar fugas de memoria al liberar recursos.
- free

A las fugas de memoria le podemos decir a cuando usamos algo en el heap
pero no lo eliminamos, entonces no podemos utilizar ese espacio de me-
moria.
*/

int main() {
    cout << "MALLOC EXAMPLE" << endl;
    /* First Example: Use of malloc
    - Allocate memory of int size to an int pointer
    - Primero se indica que ptr va a ser un puntero entero, tal
    que contendra un direccion en memoria, pero como usamos malloc
    y esta retorna un tipo void debemos hacer casting para retornar
    una direccion de memoria proporcianal al tipo de dato que vamos
    a albergar ahi, es decir, un tipo int.

    Por ende decirmos, 
    >>> ... = (<type of data desired>) malloc(sizeof(<type of data>))
    donde sizeof() recibe un entero o un tamanio en bytes de la memo-
    ria que usted quiera reservar, pero el compilador es capaz de iden-
    tificar el tamanio correspondiente a cada tipo de dato.    
    */
    int* ptr = (int*) malloc(sizeof(int));

    // Assign the value 5 to allocated memory
    *ptr = 5;

    // Display info
    cout << *ptr << endl; // Output: 5

    // Free memory
    free(ptr);



    // Second Example: Use of calloc
    cout << "\nCALLOC EXAMPLE" << endl;

    // Declare int pointer
    int *ptr2;

    // Allocate memory of int size to an int pointer
    /*
    Aca volvemos a tener el casting, luego usamos calloc donde sus parametros
    fueron entonces:
    >>> calloc(<cantidad de elementos a asignar>, <tamanio del tipo de dato>)
    Como calloc nos devuelve un void pointer, entonces nos puede retornar una
    direccion valida o invalida (NULL) donde se apunta a la nada.
    */
    ptr2 = (int*) calloc(5, sizeof(int));

    // Sanity check, donde su argumento pregunta si ptr2 es valido
    if (!ptr2) {
        cout << "Memory Allocation failed\n";
        exit(1); // alza error ya que su valor default esta dado por el return 0
    }

    // Initializing values
    cout << "Initializing values ..." << endl
         << endl;

    for (int i=0; i < 5; i++) {
        ptr2[i] = i * 2 + 1;
    }

    // Display values
    cout << "Initialized values ..." << endl;
    for (int i=0; i < 5; i++) {
        // * ptr[i] and *(ptr+i) are the same
        cout << *(ptr2 + i) << endl;
    }
    
    // Hacemos free de ptr2 ya que es mas nocivo porque contiene 5 elementos
    free(ptr2);



    return 0;
}