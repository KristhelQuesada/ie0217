#include <iostream>
using namespace std;

/*
Este programa introduce el concepto de prototipos de una funcion
con base en la diapositiva 25 de la presentacion. 

Cuando se habla del prototipo de una funcion, usualmente nos re-
ferimos a lo que es la forma o el esqueleto de la funcion y este
debe estar antes de la llamada de la funcion porque para ejecu-
tarse el main() previamente debe saber que esa funcion existe.
Luego, el cuerpo de la funcion debe estar definido despues del
main(). En el esqueleto se especifica unicamente el tipo de re-
torno, el nombre de la funcion y los tipos de sus parametros.

Esto funciona debido a que C al no ser un lenguaje interpretado,
pues ya se recorrio todo el archivo para armar el archivo de com-
pilacion.

-Using function definition after main() function but first
function prototype must be declared before main().
*/

// Declaring a function prototype
int add(int, int);

// Function Main
int main() {
    // Declaring a variable
    int sum;


    // Calling the function and storing the
    // returned value in sum
    sum = add(100, 25);

    cout << "100 + 25 = " << sum << endl;


    return 0;
}

// Function definition
int add(int a, int b) {
    return (a+b);
}