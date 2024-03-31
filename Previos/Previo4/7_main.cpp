#include <iostream>
#include "7_ejercicio.hpp"

int main() {
    // Instanciamos los objetos clase estudiante
    Student student1(88.0), student2(56.0);
    
    // Hacemos uso de la funcion que calcula el promedio
    // de las notas entre ambos estudiantes
    calculateAverage(student1, student2);

    return 0;
}