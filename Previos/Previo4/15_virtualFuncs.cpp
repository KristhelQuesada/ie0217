#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa busca ejemplificar las funciones virtuales con base en la
diapositiva 22 de la presentacion. Para ello considere el siguiente ejem-
plo, supongamos una figura geometrica que tenga una clase base que tenga
las funciones para calcular perimetro y area, para que asi el resto de
figuras geometricas solo especifiquen sus caracteristicas propias. Pero
resulta que el perimetro y el area va a depender del tipo de figura en-
tonces para esto es que se definen las funciones virtuales.

En resumen, cuando se tiene una funcion que tiene el mismo objetivo pero
distinto metodo de solucion. Por tanto, estas funciones se definen en la
clase base pero se redefiniran en la privadas. La sintaxis es parecida a
la clase amiga, con la unica diferencia que el prefijo utilizado sera
>> "virtual"
*/

class Base {
    public:
        // Definicion de la funcion virtual en la clase base
        virtual void print() {
            cout << "Base function" << endl;
        }
};

class Derived : public Base {
    public:
        // Redefinicion obligatoria de la funcion virtual
        // si no se redefine entonces el compilador salta con error
        void print() {
            cout << "Derived function" << endl;
        }
};


int main() {
    Derived derived1;

    // pointer of Base Type that points to derived1
    // base1 tendra la direccion de memoria donde inicia el objeto derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    // lo que hara es ir a ejecutar el print() de Derived
    base1->print();


    return 0;
}