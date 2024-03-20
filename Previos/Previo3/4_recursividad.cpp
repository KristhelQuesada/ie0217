#include <iostream>
using namespace std;

/*
Descripcion
Este programa introduce el concepto de recursivida en C++ con base en la
diapositiva 6 de la presentacion. Repasando un poco, una funcion es como
un molde que podemos pasar utilizando.

En este caso, vamos a estudiar la recursividad mediante el desarrollo de
la definicion de una funcion que se encarga de calcular el factorial de
un numero.

La recursividad en este caso funciona de la siguiente forma. Considere que
se quiere calcular el factorial de 5, este entonces se calcula como:
--> 5! = 5*4*3*2*1
entonces cuando llamamos a la funcion va a hacer:
--> factorial(5) = 5*factorial(4)
--> factorial(5) = 5*4*factorial(3)
--> factorial(5) = 5*4*3*factorial(2)
--> factorial(5) = 5*4*3*2*factorial(1)
--> factorial(5) = 5*4*3*2*1

La magia de la recursividad es ahorrar memoria ya que se sustituye la defi-
nicion de multiples funciones por la utilizacion de la misma sin necesidad
de sobreescribirla tantas veces.
*/

// Declaring the function
int factorial(int);

// MAIN FUNCTION
int main() {
    // Declaring variables
    int n, result;

    // First user interaction
    cout << "Enter a non negative number: ";
    cin >> n;

    // Calculate the factorial
    result = factorial(n);
    cout << "Fcatorial of " << n << " = " << result << endl;

    return 0;
}

// Defining the function
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1; //caso de factorial(1)=1
    }
}