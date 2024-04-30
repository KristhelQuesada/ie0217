#include <iostream>
using namespace std;

/*
    DESCRIPCION
    Este programa continua con la introduccion del concepto de los
    templates con base en las diapositivas 9 de la presentacion.
    Sin embargo, en este caso, se analizan template functions con
    multiples parametros, es decir, templates que permiten especi-
    ficar mas de un tipo de dato. Para ello, nada mas se agregan
    la cantidad de typename necesarios con el nombre de la variable
    especifica dentro de los <>.
*/

// class template with multiple and default parameters
template <typename T, typename U>
T multiply(T a, U b) {
    return a * b;
}

int main() {
    // Initializa variables
    int a = 3;
    double b = 4.5;

    // Use the template
    // Los dos tipos de datos se especifican en los <>
    int result = multiply<int, double>(a, b);
    cout << "El resultado de 3*4.5 es: " << result << endl;


    return 0;
}
