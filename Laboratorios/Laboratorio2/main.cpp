#include <iostream>
#include "EmpleadoAsalariado.hpp"
#include "EmpleadoPorHoras.hpp"

int main() {
    // Inicializamos objetos de cada clase
    EmpleadoAsalariado emp1("Marito", 30, 2000);
    EmpleadoPorHoras emp2("Juana", 25, 10, 40);

    // Impresion de la prueba de la clase EmpleadoAsalariado
    std::cout << "Detalles del empleado asalariado: " << std::endl;
    emp1.mostrarDetalles();
    std::cout << "Pago: $" << emp1.calcularPago() << std::endl;

    // Impresion de la prubea de la clase EmpleadoPorHoras
    std::cout << "\nDetalles del empleado por hora: " << std::endl;
    emp2.mostrarDetalles();
    std::cout << "Pago: $" << emp2.calcularPago() << std::endl;

    return 0;
}