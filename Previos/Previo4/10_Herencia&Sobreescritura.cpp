#include <iostream>
using namespace std;

/*
DESCRIPCION
En este programa se estudia la sobreescritura de funciones en la herencia
con base en la diapositiva 15 de la presentacion.

Cuando dos clases tienen una funcion que se llama igual pero hacen cosas
distintas entonces hay sobreescritura. Por tanto se especifica con los ::
cuando queremos acceder al de la clase base ya que por default se accede
a la derivada.

Existe un orden jerarquico hasta cierto punto, tal que la funcion que va
a prevalecer sera la ultima que le sobreescribamos, es decir, para dos fun-
ciones print() donde una esta en la base y otra en la derivada, si yo tengo
un objeto de la clase derivada, la funcion print() que estara activa sera
la de su misma clase ya que esa fue la ultima sobreescrita.

Por tanto, para acceder a la funcion print() de la base, debemos utilizar
el operador :: para especificar a que clase es que queremos acceder, me-
diante la sintaxis:

>> <object>.<Class>::<Function's name>
*/

class Base {
    public:
        void print() {
            cout << "Base function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived function" << endl;
        }
};


int main() {
    // First example
    Derived derived1, derived2;

    // "derived function" is printed due to the last overwrite
    derived1.print();

    // Second example
    derived2.Base::print();


    return 0;
}