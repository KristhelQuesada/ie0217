#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <iostream>
#include <string>
using namespace std;

/*
Struct para crear un libro
*/
struct Libro {
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // puntero que apunta a otra estructura del mismo tipo
};


#endif // LIBRO_HPP