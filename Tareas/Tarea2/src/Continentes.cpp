#include "Continentes.hpp" // Clase a trabajar
#include <iostream>

// Constructor de la clase Continente
Continente::Continente(string _nombre) : nombre(_nombre), Planeta("") {}

// Display de la informacion de la clase
void Continente::mostrarDetalles() const {
    cout << nombre;
}
