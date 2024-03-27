#include <iostream>
using namespace std;

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