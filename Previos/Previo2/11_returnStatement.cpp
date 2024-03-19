#include <iostream>
using namespace std;

/*
Este programa introduce el concepto de la sentencia return con
base en la diapositiva 24 de la presentacion. 

Basicamente esta sentencia nos va a decir es en que se va a
convertir la funcion. Por ejemplo, para la funcion suma definida
a continuacion, cuando esta se invoque en el main, dicha funcion
pasara a convertirse en el resultado de la suma de a y b.
*/

// Declaring a function
int add(int a, int b) {
    return (a+b);
}

int main() {
    // Declaring a variable
    int sum;


    // Calling the function and storing the
    // returned value in sum
    sum = add(100, 25);

    cout << "100 + 25 = " << sum << endl;


    return 0;
}