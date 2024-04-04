#include "EmpleadoPorHoras.hpp"

// horas trabajadas es posible accesarlo porque lo estamos accediendo desde
// su propia funcion
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

        // Estamos obligados a definirlos porque era virtual puro
double EmpleadoPorHoras::calcularPago() const {
    return salario*horasTrabajadas;
}