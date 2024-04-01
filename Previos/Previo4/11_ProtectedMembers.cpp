#include <iostream>
#include <string>
using namespace std;

/*
DESCRIPCION
En este programa se continua con el estudio de la herencia, mas en este
caso se observara el efecto de los especificadores de acceso en los miem-
bros, todo con base en la diapositiva 16 de la presentacion.

En este caso se define un objeto clase perro que tiene los mismos metodos
que animal y de los derivados, pero al ejecutar run() vemos la sobreescritura
donde se ejecuta el de la clase derivada.
*/

// Base class
class Animal {
    private:
        // Private member
        string color;

    protected:
        // Protected member
        string type;

    public:
        // Public methods
        void run() {cout << "I can run! -- Base!" << endl;}
        void eat() {cout << "I can eat!" << endl;}
        void sleep() {cout << "I can sleep!" << endl;}
        void setColor(string clr) {color = clr;}
        string getColor() {return color;}
};

// Derived class from base class Animal
class Dog : public Animal {
    public:
        // Overwriting function run() from base class
        /*
        Hasta cierto punto aca se presencia el efecto del polimorfismo
        es decir, un mismo metodo puede tomar distintas formas, y por
        tanto es solo una manera mas de hacer herencia.
        */
        void run() {cout << "I can run! -- Derived!" << endl;}

        // 4 methods of its own

        // its access to type is possible because type is a protected
        // member, so it can be accessed from a derived class
        void setType(string tp) {type = tp;}

        void displayInfo(string c) {
            cout << "I am a " << type;
            cout << " and my color is " << c << endl;
        }
        
        // void setColor(string clr) {color = clr;} but this can't be done
        void bark() {cout << "I can bark!" << endl;}
};


int main() {
    Dog dog1;
    
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}