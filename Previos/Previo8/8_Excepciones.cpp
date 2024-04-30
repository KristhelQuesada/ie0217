#include <iostream>
#include <stdexcept>
using namespace std;

/*
    DESCRIPCION
    El siguiente programa pretende continuar con el estudio de los con-
    ceptos basicos del manejo de excepciones en C++ utilizando con base
    a la diapositiva 16 de la presentacion. En este caso, simplemente se
    da a modo de cierre una ejemplificacion entre lo que deberia y no de-
    beriamos hacer al escribir codigo. Basicamente, como buena practica
    es necesario que sepamos identificar donde podrian ocurrir errores
    para asi poder manejarlos correctamente sin necesidad de que luego
    ocurra una caida innecesaria en el programa. Por ende, se exponen
    la manera incorrecta y correcta de hacer las cosas, ademas del uso
    de la biblioteca stdexcept para utilizar el runtime_error como ar-
    gumento en el throw.

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

    // Con la logica de manejo de excepciones (Buena implementacion)
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
