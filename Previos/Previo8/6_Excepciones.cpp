#include <iostream>
#include <stdexcept>
using namespace std;

/*
    DESCRIPCION

*/

int main() {
    // declare variables
    double numerador, denominador, resultado;

    // Input the information
    cout << "Enter numerator: ";
    cin >> numerador;

    cout << "Enter denominator: ";
    cin >> denominador;

    // Try-Except Logic
    try{
        // throw an exception if denominator is 0
        if (denominador == 0) {
            throw runtime_error("Error: el denominador no puede ser cero.");
        }

        // not executed if denominator is 0
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;

    } catch (const exception& e) {
        cerr << "\n" << e.what()<< endl;
    }

    return 0;
}
