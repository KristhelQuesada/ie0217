#include <iostream>
using namespace std;

/*
Este programa explica los loops o bucles de la diapositiva 17, entre
ellos se encuentran algunos como for, while and do-while. Ampliando:

El for va a tener una expresion de
=> inicializacion: for int i = 0;
=> Test de condicion: Que se ejecute cierta instruccion si la condi-
cion se cumple actualizando una expresion. Si no se cumple entonces
simplemente nos salimos del bucle.

El while funciona mediante:
=> Una condicion que se verifica entonces el cuerpo se va a ejecutar
siempre mientras se cumpla dicha condicion.
=> Como no hay una etapa de actualizacion de la expresion, entonces
dentro del while algo tiene que pasar, ya sea que se quiebre con un
brake o bien que internamente se cambie la variable condicionada para
que esta ya no se cumpla.

Luego tenemos el do-while que es casi igual al while solo que con la
unica diferencia de que el do-while:
=> ejecuta al menos una vez la primera sentencia y luego se analizan
las condiciones para ver si volvemos al loop o lo finalizamos.
=> Entonces, primero ejecutamos el primer statement (que sera lo que
se ejecuta en bucle pero inicialmente se ejecuta al menos una vez)
luego revisamos condicion y finalemente se pasa o no aejecutar el 
bucle nuevamente.

En los otros ejemplos siempre se revisa la condicion para proceder a
ejecutar el cuerpo, en el do-while sucede al reves.
*/

int main() {
    // Initializing variables
    int num_array[] = {1,2,3,4,5,6,7,8,9,10};
    int j = 1; // to try the while
    int k = 1; // to try the do-while


    // TRYING THE FOR LOOP #1
    cout << "--> For loop #1 \n";
    for (int i=1; i <= 5; ++i) {
        // int i=1 es inicializacion
        // i <= 5 es la condicion
        // ++i es la actualizacion

        // Seguidamente esta el cuerpo
        cout << i << " ";
    }
    // Prints: 1 2 3 4 5


    // TRYING THE FOR LOOP #2
    cout << "\n\n--> For loop #2 with arrays \n";
    for (int n : num_array) {
        // n va a tomar el valor del elemento, no el indice del arreglo

        // Seguidamente esta el cuerpo
        cout << n << " ";
    }
    // Prints: 1 2 3 4 5 6 7 8 9 10


    // TRYING THE WHILE LOOP
    cout << "\n\n--> While loop \n";
    while (j <= 5) {
        // while loop from 1 to 5
        // Body
        cout << j << " ";
        ++j;
    }
    // Prints: 1 2 3 4 5


    // TRYING THE DO-WHILE LOOP
    cout << "\n\n--> Do-While loop \n";
    do {
        // do...while loop from 1 to 5
        // Body
        cout << k << " ";
        ++k;
    }
    while (k <= 5);
    // Prints: 1 2 3 4 5


    cout << endl;


    return 0;
}