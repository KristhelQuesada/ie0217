#include "EmpleadoAsalariado.hpp"

// Constructor de la clase EmpleadoAsalariado
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {}

// Esta es la funcion virtual pura que necesitaba definirse si o si
double EmpleadoAsalariado::calcularPago() const {
    return salario;
}
