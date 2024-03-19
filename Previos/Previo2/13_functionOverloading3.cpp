#include <iostream>
using namespace std;

/*
Este programa continua con el estudio de sobrecarga
de funciones con base en la diapositiva 28 de la
presentacion.
*/

// Function with 2 parameters
void display(int var1, double var2) {
    cout << "==> Function with 2 parameters" << endl;
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;

}

// Function with double type single parameters
void display(double var) {
    cout << "==> Function with double type single parameters" << endl;
    cout << "Double number: " << var << endl;

}

// Function with int type single parameters
void display(int var) {
    cout << "==> Function with int type single parameters" << endl;
    cout << "Integer number: " << var << endl;

}


// Function Main
int main() {
    // Initializing variables
    int a = 5;
    double b = 5.5;

    // Calling the overload functions
    display(a);
    display(b);
    display(a, b);

    return 0;
}