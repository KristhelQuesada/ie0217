#include <iostream>
using namespace std;

/*
Este programa introduce el uso de funciones de la diapositiva 20.
Existen 2 tipos de funciones, las predefinidas y las creadas por
el usuario y que llevan la siguiente sintaxis:
<return type> <function name> (parameters...) { <function body> }

Asimismo, una funcion puede recibir 4 tipos de argumentos:
==> De valor: Son los comunes y funcionan enviando un valor definido.
==> De referencia: Mandamos una copia del valor de la variable, entonces
sus cambios no solo se van a ver reflejados en el scope sino que a afecta
a la variable original.
==> De puntero: Enviamos una variable de tipo puntero que internamente
contiene la direccion donde esta almacenado cierto valor.
==> POr defecto: Dependiendo de si no mandamos el argumento, entonces
tendra un valor por defecto.
*/

// Function declaration
void greet() {
    cout << "Hello world \n";
}

void displayNum(int n1, float n2) {
    cout << "The int number is " << n1 << endl;
    cout << "The double number is " << n2 << endl;
}

int main() {
    // Initializing variables
    int num1 = 5;
    double num2 = 5.5;

    // calling a function
    greet();
    displayNum(num1, num2);

    return 0;
}