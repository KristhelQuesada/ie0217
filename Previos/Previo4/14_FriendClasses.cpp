#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa da seguimiento al concepto de funciones amigas con base en
la diapositiva 21 de la presentacion. Basicamente es igual al segundo
ejemplo de la presentacion 20, solo que en vez de trabajar con funciones
amigas se trabaja con clases amigas.

Entonces, en ClassA se especifica que ClassB sera una clase amiga y en
ClassB se declara el objeto ClassA donde podemos acceder libremente ya
que le dijimos a A que B era amiga y por ende le podiamos otorgar los
permisos.
*/

class ClassB;

class ClassA {
    private:
        int numA;

        // friend function declaration
        friend class ClassB;

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

        // member function to add NumA from ClassA
        // and numB from ClassB
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};


// Funcion Main
int main() {
    ClassB objectB;

    cout << "Sum: " << objectB.add() << endl;

    return 0;
}