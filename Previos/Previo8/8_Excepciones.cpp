#include <iostream>
#include <stdexcept>
using namespace std;

/*
    DESCRIPCION

*/

int main() {
    // declare variables
    double numerador, denominador, resultado1, resultado2;

    // Input the information
    cout << "Enter numerator: ";
    cin >> numerador;

    cout << "Enter denominator: ";
    cin >> denominador;

    // Sin la logica de manejo de excepciones (Mala implementacion)
    resultado1 = numerador / denominador;
    cout << numerador << "/" << denominador << " = " << resultado1 << endl;

    // COn la logica de manejo de excepciones (Buena implementacion)
    try{
        // throw an exception if denominator is 0
        if (denominador == 0) {
            // Disparamos un error en tiempo de ejecucion que recibe por
            // parametro un string
            throw runtime_error("Error: el denominador no puede ser cero.");
        }

        // not executed if denominator is 0
        resultado2 = numerador / denominador;
        cout << "El resultado es: " << resultado2 << endl;

    } catch (const exception& e) {
        /*
        El argumento es una nomenclatura especial para interpretar las
        excepciones que ya C++ trea incorporadas como standard. Entonces
        hacemos un cerr (para imprimir un error), donde el e.what es para
        ver que fue el error y asi imprimir la informacion que enviamos
        por el runtime_error.
        */
        cerr << "\n" << e.what()<< endl;
    }

    return 0;
}
