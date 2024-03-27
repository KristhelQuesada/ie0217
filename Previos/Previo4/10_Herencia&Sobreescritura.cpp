#include <iostream>
using namespace std;

/*
DESCRIPCION
Cuando dos clases tienen una funcion que se llama
igual pero hacen cosas distintas entonces hay sobre-
escritura. Por tanto se especifica con los :: cuando
queremos acceder al de la clase base ya que por de-
fault se accede a la derivada.
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
    derived1.print();

    // Second example
    derived2.Base::print();


    return 0;
}