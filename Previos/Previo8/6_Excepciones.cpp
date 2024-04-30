#include <iostream>
using namespace std;

/*
    DESCRIPCION
    El suuiente programa pretende introducir los conceptos basicos del
    manejo de excepciones en C++ utilizando como base el ejemplo de la
    diapositiva 12 de la presentacion. En este caso, el manejo de ex-
    cepciones se maneja mediante los bloques try, throw and catch.

    Try: contiene el código donde se podría presentar un error. Enton-
    ces es como decirle o antiparle al compilador que ahi algo podria
    salir mal.

    Throw: alza la excepcion tal que si algo sucede de la manera inco-
    rrecta entonces nos va a permitir enviar un argumento al catch, lo
    cual nos permite tener mas control e informacion sobre que fue lo
    que paso.

    Catch: maneja la excepcion lanzada por el throw con el fin de mani-
    pular lo que ha pasado y poder asi mostrar mas informacion del error
    de ser necesario.

    En este caso, vamos evaluar el ejemplo de dividir entre cero para
    estudiar el comportamiento y sintaxis del manejo de excepciones.
*/

int main() {
    // Declaring variables
    double numerator, denominator, divide;

    // Input the information
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    // Exception handling logic
    // First example
    cout << ">>> FIRST EXAMPLE" << endl;
    try{
        // throw an exception if denominator is 0
        // Si entro aca y ejecuto el throw entonces lo que hago es brincar
        // al bloque de cathc porque este es el que sabe como manejar lo
        // que es la excepcion
        if (denominator == 0) {
            throw 0; // cero es el argumento
        }

        // not executed if denominator is 0
        // so just divide the numbers and display the result
        divide = numerator / denominator;
        cout << numerator << "/" << denominator << " = " << divide << endl;
    }

    // aca el argumento que nos estan pasando era el cero de arriba.
    // y lo que hacemos dentro del catch es simplemente imprimr un
    // mensaje de error.
    catch  (int num_exception) {
        cout << "\nError: Cannot divide by " << num_exception << endl;
    }

    // Second example
    // En este caso lo que queremos ver es que si dividimos entre cero aca
    // no salta la excepcion sino que arroja que el resultado es infinito
    // y nosotros no queremos eso
    cout << "\n>>> SECOND EXAMPLE" << endl;
    try{
        if (denominator == 5) {
            throw 5;
        }

        divide = numerator / denominator;
        cout << numerator << "/" << denominator << " = " << divide << endl;
    }

    catch  (int num_exception) {
        cout << "\nError: Cannot divide by " << num_exception << endl;
    }

    return 0;
}
