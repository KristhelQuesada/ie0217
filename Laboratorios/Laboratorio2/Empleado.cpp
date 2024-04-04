// Aca se incluye la implementacion
// Aca no se definen los virtuales

#include "Empleado.hpp"
#include <iostream>

// Constructor de la clase empleado
Empleado::Empleado(std::string _nombre, int _edad, double _salario) :
    nombre(_nombre), edad(_edad), salario(_salario) {}

// Funcion de la clase empleado
void Empleado::mostrarDetalles() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Salario: " << salario << std::endl;
}