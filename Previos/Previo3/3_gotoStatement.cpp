#include <iostream>
using namespace std;

/*
Descripcion

Este programa introduce la sentencia o directiva goto (ir a) la cual
presentada mas no recomendada porque es considerada como riesgosa.
Su funcion consiste en definir un label y dependiendo de como se cons-
truya el programa, podemos pasar directamente a ejecutar lo que tenga-
mos en el label. Todo con base en la diapositiva 5 de la presentacion.

El programa desarrollado para ejemplificar el concepto del goto fun-
ciona tal que se le solicita al usuario que digite la cantidad de nu-
meros que quiere ingresar, luego le solicita esa misma cantidad de
veces al usuario que digite un numero. El proposito es calcular el
promedio de los numeros ingresados, pero si por alguna razon el usuario
digita un numero negativo entonces mediante el goto se procedera a cal-
cular el promedio solo con los numeros positivos digitados previamente.

En este caso, cuando se cae a la condicion que ejecuta el goto, se rompe
de manera brusca el for, por lo que si quedaban iteraciones restantes,
estas ya no seran ejecutadas sino que se pierden.
*/

int main() {
    // Initializing variables
    float num, average, sum = 0.0;

    // Declaring variables
    int i, n;

    // First user interaction
    cout << "Maximum number of inputs: ";
    cin >> n;

    for (i=1; i <= n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if (num < 0.0) {
            // Control de program - move to jump
            goto jump;
        }

        sum += num;
    }

    jump:
        average = sum / (i-1);
        cout << "\nAverage = " << average << endl;
        return 0;
}