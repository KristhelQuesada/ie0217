#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <iostream>
#include <string>
using namespace std;

/*
Struct para crear una lista enlazada de contactos
*/
struct Contacto {
    string name;
    unsigned int phone;
    Contacto* siguiente; // puntero que apunta a otra estructura del mismo tipo
};


#endif // CONTACTO_HPP