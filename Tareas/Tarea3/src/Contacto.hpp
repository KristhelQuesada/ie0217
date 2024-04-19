#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <iostream>
#include <string>
using namespace std;

/*
Struct para crear una lista enlazada de Contactos
Tambien se puede crear un unico contacto sin necesidad de ser una lista
enlazada, lo unico que se debe hacer en ese caso es inicializar el miem-
bro siguiente como nullptr.
*/
struct Contacto {
    string name; // nombre del contacto
    unsigned int phone; // telefono deel contacto
    Contacto* siguiente; // puntero que apunta a otra estructura del mismo tipo
};


#endif // CONTACTO_HPP