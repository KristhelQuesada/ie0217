#include <iostream>
#include "2_estudiante.hpp"

int main() {
    // CReamos objeto de la clase estudiante
    Estudiante estudiante("Juan", 20);

    // Ejecutamos la funcion mostrar datos para 
    // ver los atributos de dicho objeto
    estudiante.mostrarDatos();


    return 0;
}