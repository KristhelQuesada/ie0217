#include "Libro.hpp"

/*
Implementacion de las funciones de la clase Libro
*/


// Definicion del constructor
// Recibe el nombre, autor y anio por parametro e inicializa
// sus miembros respectivamente.
Libro::Libro(std::string t, std::string a, int anio)
: titulo(t), autor(a), anioPublicacion(anio) {}

// Overload de operador <
// Retorna
// ---> True si el anio de publicacion es menor que el anio de
//      publicacion del otro libro que se paso por parametro.
// ---> False si el anio de publicacion es mayor que el anio de
//      publicacion del otro libro que se paso por parametro
// Se realiza esta sobrecarga porque si se quiere utilizar el algoritmo
// de la STL sort(), este trabaja internamente con un comparador logico
// por tanto si se quiere aplicar sort a un objeto tipo libro, primero
// se debe hacer una sobrecarga de este operador para que asi sea habi-
// litado el uso del sort() sobre este objeto creado tal que sepa el sort
// con base a que comparar.
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}