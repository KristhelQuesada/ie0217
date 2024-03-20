#include <iostream>
using namespace std;

/*
Description:
Este programa continua el estudio de punteros pero ahora aplicado
dentro del ambito de los structs con base en la diapositiva 15, 16
y 17 de la presentacion.

En el caso del ejemplo asociado a la estructura Distancia, esta con-
tiene un valor entero que es feet y un valor flotante que es inch.
Entonces en el main() creo dos tipos de elementos:
1. Distance *ptr1: una variable tipo distancia puntero
2. Distance d: una variable tipo distancia

Cabe destacar en terminos de sintaxis que el uso de (*ptr1).feet es
equivalente a decir d.feet ya que (*ptr1) esta accediendo al valor
asociado a la direccion de memoria de ptr1. Sin emabrgo, se prefiere
el operador -> ya que si nos olvidamos de poner los parentesis en la
otra forma, el orden de precedencia no seria el mismo y nos arrojaria
un error al compilar.

*/

// Definition of some structs
struct temp {
    int i;
    float f;
};

struct Distance {
    int feet;
    float inch;
};


// MAIN FUNCTION
int main() {
    // Example 1
    temp *ptr;


    // Example 2
    // Declaring
    Distance *ptr1, d;

    // Initializing
    // the direction is passed to the pointer
    ptr1 = &d;

    // first way to save info
    cout << "Enter feet: ";
    cin >> (*ptr1).feet;
    cout << "Enter inch: ";
    cin >> (*ptr1).inch;

    cout << "Displaying information:" << endl;
    cout << "Distance: " << (*ptr1).feet << " feet " << (*ptr1).inch << " inch " << endl;

    // second (best) way to save info
    cout << "\nEnter feet: ";
    cin >> ptr1->feet;
    cout << "Enter inch: ";
    cin >> ptr1->inch;

    cout << "Displaying information:" << endl;
    cout << "Distance: " << ptr1->feet << " feet " << ptr1->inch << " inch " << endl;


    return 0;
}