#include "Paises.hpp" // Clase que estamos trabajando
#include <iostream>

// Constructor de la clase Continente
Pais::Pais(string _nombre) : nombre(_nombre), Continente("") {}

// Display de la informacion de la clase
void Pais::mostrarDetalles() const {
    cout << nombre;
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void Pais::mostrarNombre() const {
    cout << nombre;
}