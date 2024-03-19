#include <iostream>
using namespace std;

/*
Este programa introduce el concepto de function overloading
o sobrecarga de funciones con base en la diapositiva 26 de
la presentacion.

La sobrecarga lo que significa es que tenemos algo con el
mismo molde pero le estamos empezando a sobreescribir cosas
encima.

Esto puede funcionar, tipo se pueden tener 2 funciones con
el mismo nombre siempre y cuando el numero o tipo de argu-
mentos que se le pasan es distinto. Y en este caso, el sis-
tema sabra cual ejecutar en base al tipo de parametro que
se le pase.

>> Coding errors in its usage
int test(int a) { }
double test(int b) { }

porque lo que se quiere diferente es el tipo de los argu-
mentos no el tipo de la funcion. En este archivo se pre-
senta un ejemplo propio.
*/

// Overload functions (same name but diff args)
// debemos retornar algo cuando definimos un tipo de retorno.
int test() { 
    cout << "First function " << endl;
    return 0;
};

int test(int a) {
    cout << "Second function and a is " << a << endl;
    return a;
};

float test(double a) {
    cout << "Third function and a is " << a << endl;
    return a;
};

int test(int a, double b) {
    double c = a + b;
    cout << "Fourth function and a+b is " << c << endl;

    return c;
};


// Function Main
int main() {
    // Declaring a variable
    int value;

    // Calling the overload functions
    test();
    test(10.1);
    test(100);
    test(100, 5.6);


    return 0;
}