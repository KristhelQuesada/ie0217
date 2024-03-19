#include <iostream>
using namespace std;

/*
Este programa combina los fragmentos de codigo de la
diapositiva 7 que muestra una comparacion entre las
variables globales y las variables locales.

La declaracion de una variable implica unicamente su
reserva en memoria mientras que la inicializacion cuando
se le asigna un valor definido.

Para el caso de las variables globales, estas no son ne-
cesarias definirlas dentro del main; mientras que las va-
riables locales se definen y existen unicamente dentro de
un scope.
*/

// Declaring a global variable
int g;

int main() {
    // Declaring a local variable
    int a, b, c;

    // Inicialization
    a = 10;
    b = 20;
    c = a + b;
    g = a + b;

    // Displaying
    cout << "El valor de c es: " << c;
    cout << "\n";
    cout << "El valor de g es: " << g;
    cout << "\n";
    
    return 0;
}