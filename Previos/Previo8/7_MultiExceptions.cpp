#include <iostream>
#include <stdexcept>
using namespace std;

/*
    DESCRIPCION
    El suuiente programa pretende continuar con el estudio de los con-
    ceptos basicos del manejo de excepciones en C++ utilizando con base
    a la diapositiva 14 de la presentacion. En este caso, se estudia el
    uso de (...) en el catch en casos donde se desconocen los tipos de
    excepciones que pueden ocurrir. Ademas, un ejemplo donde se tengan
    multiples excepciones.
*/

int main() {
    // declare variables and initialize array
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    // Asking the array index
    cout << "Enter array index: ";
    cin >> index;

    // Exception Handling logic
    try {
        // FIRST EXCEPTION. Throws exception if array out of bounds
        if (index >= 4)
            throw "Error: Array out of bounds";

        // not executed if array is out of bounds
        cout << "Enter numerator: ";
        cin >> numerator;
    
        cout << "Enter denominator: ";
        cin >> denominator;
    
        // SECOND EXCEPTION. Throws an exception if denominator is 0
        if (denominator == 0) {
            throw 0;
        }

        // not executed if denominator is 0
        arr[index] = numerator / denominator;
        cout << "El resultado es: " << arr[index] << endl;

    }

    // catch "Array out of bounds" exception
    catch (const char* msg) {
        cout << msg << endl;
    }

    // catch "DIvide by 0" exception
    catch (int num) {
        cout << "\nError: Cannot divide by " << num << endl;
    }

    // catch any other exception
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }

    return 0;
}
