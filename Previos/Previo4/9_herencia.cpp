#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa busca continuar con el estudio o caracteristica de la
herencia en C++ con base en la diapositiva 13 y 14 de la presentacion.

Es importante ya que nos permite crear una nueva clase derivada a par-
tir de una clase existente (siendo esta la clase base), donde la clase
derivada hereda las caracteristicas de la clase base adicionales a las
propias que se le definan.

En este caso tendremos la clase base llamada Animal y una clase Derivada
llamada perro donde especificaremos que es Derivada de la clase animal
mediante la sintaxis:
>> class <class name> : <access specifier> <Base class>

donde se observa en el main que el objeto dog1 clase Dog, puede acceder
a metodos tanto de la clase base como de la clase derivada.
*/

// Base class
class Animal {
    // public specifier
    public:
        // Two general methods
        void eat() {
            cout << "I can eat" << endl;
        }

        void sleep() {
            cout << "I can sleep" << endl;
        }
};


// Derived class of Animal (base) class
class Dog : public Animal {
    // Public specifier
    public:
        // Specific method, characteristic of a dog
        void bark() {
            cout << "I can bark" << endl;
        }
};


int main() {
    // Instantiation of object
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling members of the derived class
    dog1.bark();


    return 0;
}