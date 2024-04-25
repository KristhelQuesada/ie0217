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
    std::vector<Libro> libros; // contenedor vector que contiene objetos de la clase Libro

public:
    /*
    Funcion que permite agregar un libro por referencia y constante. Donde el const
    no permite que su valor sea modificado dentro de la funcion y la referencia permite
    que no se pase una copia sino el objeto en la direccion en memoria original, lo
    cual resulta mas eficiente que si fuera por valor.
    */
    void agregarLibro(const Libro& libro);

    void mostrarLibros(); // Funcion para mostrar todos los libros del vector

    void ordenarLibrosPorAnio(); // Funcion que busca ordernar el vector de manera ascendente por anio de publicacion

    // Funcion que retorna un iterador especifico para un vector que contiene objetos clase Libro
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    // Funcion que retorna el iterador final para un vector que contiene objetos clase Libro
    std::vector<Libro>::iterator end();
};

#endif // BIBLIOTECA_HPP