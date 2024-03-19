#include <iostream>
using namespace std;

/*
Este programa continua con el estudio de sobrecarga
de funciones con base en la diapositiva 27 de la
presentacion.

Es para correr el valor absoluto de valores tipo int
y float.
*/

// Function with float type parameter
float absolute(float var) { 
    if (var < 0.0)
        var =- var;

    return var;
}

// Function with int type parameter
int absolute(int var) { 
    if (var < 0)
        var =- var;

    return var;
}


// Function Main
int main() {
    // Calling the overload functions
    cout << "Absolute value of -5 = " << absolute(-5) << endl;
    cout << "Absolute value of -5.5 = " << absolute(-5.5f) << endl;

    return 0;
}