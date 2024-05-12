// Implementacion de las funciones miembro de la clase Biblioteca
#include <iostream>
#include "Biblioteca.hpp"

// Funcion para agregar libro por titulo y autor
void Biblioteca::agregarLibro(
    const std::string& titulo,
    const std::string& autor
) {
    catalogo.emplace_back(titulo, autor);
}

// Funcion para mostrar todos los libros agregados
void Biblioteca::mostrarCatalogo() {

    // Utilizando las propiedades de los vectores
    // para cada objeto libro del catalogo entonces
    // utilizamos mostrarInfo() que despliega el
    // titulo y el autor
    for (const auto& libro : catalogo) {
        libro.mostrarInfo();
    }
}
