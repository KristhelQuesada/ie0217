#include "Continentes.hpp" // Clase a trabajar
#include <iostream>

// Constructor de la clase Continente
Continente::Continente(string _nombre) : nombre(_nombre), Planeta("", 10) {}

// Display de la informacion de la clase
void Continente::mostrarDetalles() const {
    cout << "Continente: " << nombre << std::endl;
}
