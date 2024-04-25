#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>     // para el uso de vector
#include <algorithm>  // para el uso de sort
#include "Libro.hpp"  // para el uso de objetos clase Libro

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);

    void mostrarLibros();

    void ordenarLibrosPorAnio();

    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    std::vector<Libro>::iterator end();
};

#endif // BIBLIOTECA_HPP