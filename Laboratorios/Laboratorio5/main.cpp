#include <iostream>         // para los cout
#include "Biblioteca.hpp"

int main() {
    // Declara objeto de tipo Biblioteca
    Biblioteca miBiblioteca;

    // Inicializa algunos libros que son objetos de la clase Libro
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});

    // Ordena de manera ascendente y por anio de publicacion los libros que
    // contiene el miembro vector de objetos libros de la Biblioteca
    miBiblioteca.ordenarLibrosPorAnio();

    // Despliega los libros del vector que contiene la Biblioteca pero de
    // manera ordenada
    miBiblioteca.mostrarLibros();

    // Aplica la funcion buscarLibroPorTitulo que devuelve un iterador
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");

    // Si dicho iterador es diferente del iterador final (ya que por default
    // la funcion find_if retorna este iterador si no hubo coincidencias) en-
    // tonces imprima el libro encontrado
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;

        // si el iterador si fue igual al final de la biblioteca entonces
        // sabemos que no hubo coincidencia y por tanto se imprime tal
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}
