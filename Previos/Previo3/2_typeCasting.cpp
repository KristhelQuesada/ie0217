#include <iostream>
using namespace std;

/*
Descripcion

Este programa introduce el concepto de casting con base en la diapo-
sitiva 4 de la presentacion. Cuando hablamos de casting nos referi-
mos a una conversion de un tipo de dato a otro, donde dichas conver-
siones existen de manera implicita o explicita.
*/

int main() {
    // Initializing variables
    int num1_int = 9;
    double num2_double = 3.56;

    // Declaring Double Variable
    double num1_double;

    // CONVERTING INT TO DOUBLE
    // Implicit conversion
    // because we assigned a int value to a double variable
    num1_double = num1_int;

    cout << "num1_int = " << num1_int << endl;
    cout << "num1_double = " << num1_double << endl;


    // CONVERTING DOUBLE TO INT
    // Explicit conversion
    // because we used (<type>)<variable> syntax
    // pero tenemos perdida de informacion.

    // before conversion
    cout << "num2_double = " << num2_double << endl;

    // Initializing new value and conversion
    int num2_int1 = (int)num2_double;
    cout << "num2_int1 = " << num2_int1 << endl;

    int num2_int2 = int(num2_double);
    cout << "num2_int2 = " << num2_int2 << endl;


    return 0;
}