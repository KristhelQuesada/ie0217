#include <iostream>
using namespace std;

/*
Description:
Este programa continua el estudio de punteros pero ahora aplicado
dentro del ambito de los arreglos o arrays con base en las diaposi-
tivas 15, 16 y 17 de la presentacion. 

En este caso al crear un puntero hacia un array, el valor asociado
a este puntero sera la direccion donde inicia el array, es decir,
la direccion del primer elemento del arreglo. Existen dos formas de
agregar la direccion de ese arreglo hacia la variable pointer:
1. ptr = arr
2. ptr = &arr[0]

ARITMETICA DE PUNTEROS
Va a depender del tipo de puntero con el cual se este trabajando.
sin embargo el compilador ayuda un poco identificando el tipo de
dato y por tanto si estamos trabajando con un puntero entero en-
tonces al hacer ptr+1 para que nos de la siguiente posicion del
arreglo (suponiendo que partimos en 0), el compilador va a saber
que lo que se quiso decir fue ptr[0]+4 (por los 4bytes).

ADICIONAL
Recordemos que en el caso de los arreglos tipo string, este se
puede modelar como un arreglo de caracteres donde su tamanio sera
la cantidad de caracteres utilizados +1, donde el adicional es un
caracter especial para definir que ahi se termino el string.
*/


int main() {
    // Declaring
    //int *ptr;
    //int arr[5];
    float arr[3];
    float *ptr;    //Declaring the pointer variable

    // Initializing
    //ptr = arr;

    // EXAMPLE #1
    //ptr + 1 is equivalent to &arr[1];
    //ptr + 2 is equivalent to &arr[2];
    //ptr + 3 is equivalent to &arr[3];
    //ptr + 4 is equivalent to &arr[4];

    // Use dereference operator
    //*ptr == arr[0];
    //*(ptr + 1) is equivalent to arr[1];
    //*(ptr + 2) is equivalent to arr[2];
    //*(ptr + 3) is equivalent to arr[3];
    //*(ptr + 4) is equivalent to arr[4];


    // EXAMPLE #2
    cout << "Displaying address using arrays:" << endl;

    // for loop which purpose is to print the addresses of all the
    // elements in the array
    for (int i=0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // Point of the first value of the array
    // is equal to ptr = &arr[0]
    ptr = arr;

    cout << "\nDisplaying address using pointers:" << endl;
    
    // for loop which purpose is to print the addresses of all the
    // elements in the array BUT using pointer notation    
    for (int i=0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }

    return 0;
}