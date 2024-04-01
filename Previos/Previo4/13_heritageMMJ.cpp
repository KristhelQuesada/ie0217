#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa sirve para demostrar el comportamiento de los distintos
tipos de herencia: multinivel, multiple y jerarquica (de ahi el MMJ del
nombre del archivo) con base en la diapositiva 18 de la presentacion.

Herencia multinivel: Es como una tirar una ficha de domino que bota las
demas, es decir, se puede tener una clase A que contiene un metodo des-
plegar que imprime un texto. Entonces, podemos crear un clase B que here-
da de la clase A y una clase C que hereda de la clase B, y asi sucesivamente.

Herencia multiple: En este caso las clases no se gastan, es decir, podemos
tener multiples clases bases. Por ejemplo, pueden definirse dos clases se-
paradas (Mammal and WingedAnimal) y por ende un murcielago puede llegar y
absorber los atributos de manera derivada de ambas bases.

Herencia jerarquica: Por ejemplo, se puede tener una clase Animal, y unas
clases derivadas de esta Perro y Gato, porque estas no se gastan, puedo
asignarle la herencia base a una derivada cuantas veces sea necesario.
*/

// Multinivel
class A {
    public:
        void display() {
            cout << "Base class content" << endl;
        }
};

class B : public A {};
class C: public B {};


// Multiple
class Mammal {
    public:
        Mammal() {
            cout << "Mammals can give direct birth." << endl;
        }
};

class WingedAnimal {
    public:
        WingedAnimal() {
            cout << "Winged Animals can flap." << endl;
        }
};

class Bat: public Mammal, public WingedAnimal {};


// Jerarquica
class Animal {
    public:
        void info() {
            cout << "I am an animal" << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "I'm a dog, woof woof" << endl;
        }
};

class Cat :public Animal {
    public:
        void meow() {
            cout << "I'm a cat, meow meow" << endl;
        }
};



// Main Function
int main() {

    // Ejemplo multinivel
    cout << ">>> EJEMPLO MULTINIVEL" << endl;
    C obj;
    obj.display();

    // Ejemplo multiple
    cout << "\n>>> EJEMPLO MULTIPLE" << endl;
    Bat b1;

    // Ejemplo jerarquico
    cout << "\n>>> EJEMPLO JERARQUICO" << endl;

    // create object of Dog class
    Dog dog1;
    cout << "Dog class" << endl;
    dog1.info(); // parent class function
    dog1.bark();

    // create object of Dog class
    Cat cat1;
    cout << "\nCat class" << endl;
    cat1.info(); // parent class fuction
    cat1.meow();


    return 0;
}