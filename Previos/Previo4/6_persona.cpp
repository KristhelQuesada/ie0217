#include "6_persona.hpp"
using namespace std;

// Implementacion del archivo tal que se realizan las
// definiciones del constructor y de las funciones.

// Definicion del constructor
// El operador :: se utiliza para definir el constructor de
// la clase Persona fuera del cuerpo de la clase, tal que se
// especifica que la funcion o constructor Persona() pertenece
// a la clase persona.
Persona::Persona(string nombre, int edad) {
    /*
    Recordando que el operador this es un puntero que se
    refiere al objeto actual, por tanto cuando se crea un
    nuevo objeto Persona "this->nombre" asigna el valor
    del parámetro nombre pasado al constructor hacia el
    atributo nombre.
    */
    this->nombre = nombre;
    this->edad = edad;
}

// Definicion de las funciones
// Nuevamente el operador de resolucion de ambito "::"
// funciona para especificar que esa funcion getNombre(),
// getEdad() y setEdad() estaran dentro de la clase Persona
string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}