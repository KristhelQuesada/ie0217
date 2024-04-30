#include <iostream>
using namespace std;

/*
    DESCRIPCION
    Este programa pretende introducir el concepto de templates con
    base en las diapositivas 2, 3 y 4 de la presentacion. Los tem-
    plates son una plantilla como su nombre lo dice, que permiten
    escribir funciones y clases de tal forma que su instanciacion
    permita modificar el tipo de variables que utiliza sin necesi-
    dad de reescribir mas de una vez una misma funcion con tipos de
    datos especificos como sucedia con la sobrecarga de funciones.
    
    
    En otras palabras, utilizar templates permite escribir funcio-
    nes y clases que pueden ser usadas con distintos tipos de datos
    sin necesidad de escribir código específico para cada tipo.

    En este programa vemos como crear un template para una funcion,
    donde los pasos para definir un template estan dados por:

    1. Se inicia con la palabra clave template.
	2. Luego, se incluyen los parámetros dentro de <>.
    3. Finalmente la definición de la función.

    Luego, para instanciar esta funcion basta con escribir el nombre
    de la funcion y entre <> explicitar el tipo de dato, luego los
    parametros como de costumbre.

*/

// Definicion de un function template
// En este caso, una funcion que se encarga de realizar una suma
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    // Declare variables
    int result1;
    double result2;

    // Calling with int parameters
    // Para ello se utiliza el nombre de la funcion y entre <>,
    // se coloca el tipo de dato, tal que int entonces pasaria
    // a ser la T de la definicion
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // Calling with double parameters
    // En este caso la T internamente se sustituye por double
    // en la definicion
    result2 = add<double>(2.2, 3.2);
    cout << "2.2 + 3.3 = " << result2 << endl;


    return 0;
}
