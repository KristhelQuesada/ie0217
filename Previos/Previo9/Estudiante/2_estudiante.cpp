#include <iostream>
#include "2_estudiante.hpp"

// Implementacion de las funciones miembro de la clase estudiante

// Constructor
Estudiante::Estudiante(
    const std::string& nombre, int edad
) : nombre(nombre), edad(edad) {}

// Funcion para ver los miembros privados
void Estudiante::mostrarDatos() {
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}