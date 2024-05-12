#include <iostream>
#include "Libro.hpp"

// Implementacion de la clase Libro

// Constructor
Libro::Libro(
    const std::string& titulo, const std::string& autor
) : titulo(titulo), autor(autor) {}

// Funcion para mostrar los atributos privados
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}