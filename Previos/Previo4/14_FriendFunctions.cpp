#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa introduce el concepto de funciones amigas con base en la
diapositiva 19 y 20 de la presentacion. Asimismo, se abarca el tema de la
ocultacion de datos como concepto fundamental ya que restringue el acceso
de miembros privados desde fuera de la clase y como para miembros protegidos
solo las clases derivadas acceden a ellas mas no externos. No obstante,
las funciones amigas son excepciones a estos postulados.

INTRO PAGE #19
Si yo tengo la clase MyClass y tengo un miembro privado member1, entonces
no es posible acceder (inicializar) externamente este miembro en el main
porque no tenermos acceso ya que es privado.

EXAMPLE 2 PAGE #20
Se debe definir la clase amiga en ambas porque la funcion add() tiene como
parametro dos objetos tipo ClaseA y ClaseB, entonces para que dicha funcion
sirva, se necesita declarar la funcion amiga en ambas para asi poder extraer
los miembros privados numA y numB
*/

// Introductory class page #19
class MyClass {
    private:
        int member1;
};

// Example 1 page #20
// clase distancia
class Distance {
    private:
        int meter; // atributo o miembro privado

        // Definition of the prototype of a friend function
        // we need to specify it with the prefix 'friend'
        friend int addFive(Distance);

    public:
        Distance() : meter(0){}
};

// This is the definition of the friend function
// note that we dont add de prefix, it is only
// specified in the declaration
int addFive(Distance d) {
    // accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}


// Example 2 page #20
// Declaration of ClassB
class ClassB;

// Definition of ClassA
class ClassA {
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}

    private:
        int numA;

        // friend function declaration
        friend int add(ClassA, ClassB);
};

class ClassB {
    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

    private:
        int numB;
        
        // friend function declaration
        friend int add(ClassA, ClassB);
};

int add (ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}



// Funcion Main
int main() {
    MyClass obj;

    // Error! Cannot access private members from here if I run
    // obj.member1 = 5;


    // Example 1
    cout << ">>> EXAMPLE 1: " << endl;
    Distance D;
    cout << "Distance: " << addFive(D) << endl;


    // Example 2
    cout << ">>> EXAMPLE 2: " << endl;
    ClassA objectA;
    ClassB objectB;

    cout << "Sum: " << add(objectA, objectB) << endl;

    return 0;
}