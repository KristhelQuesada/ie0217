#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

/*
Clase Biblioteca, incluye como miembro un vector que contiene objetos de la Clase libro,
y se definen los prototipos de las funciones de la clase
*/

// Inclusion de bibliotecas y header files necesarios para el funcionamiento de la clase
#include <vector>     // para el uso de vector
#include "Libro.hpp"  // para el uso de objetos clase Libro


class Biblioteca {
private:
    std::vector<Libro> catalogo; // contenedor vector que contiene objetos de la clase Libro

public:
    // Funciones miembro publicas

    // Funcion que permite agregar libros
    void agregarLibro(
        const std::string& titulo,
        const std::string& autor
    );

    // Funcion para mostrar todos los libros agregados
    void mostrarCatalogo();
};

#endif // BIBLIOTECA_HPP