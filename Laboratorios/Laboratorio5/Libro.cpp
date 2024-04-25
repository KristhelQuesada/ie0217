#include "Libro.hpp"

// Definicion del constructos
Libro::Libro(std::string t, std::string a, int anio)
: titulo(t), autor(a), anioPublicacion(anio) {}

// Overload de operador <
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}