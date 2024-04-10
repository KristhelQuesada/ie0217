#include "PaisesEnDesarrollo.hpp" // Clase que estamos trabajando
#include <iostream>

// Constructor de la clase Continente
PaisEnDesarrollo::PaisEnDesarrollo(string _nombre) : nombre(_nombre), Pais("") {}

// Display de la informacion de la clase
void PaisEnDesarrollo::mostrarDetalles() const {
    cout << nombre;
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void PaisEnDesarrollo::mostrarNombre() const {
    cout << nombre;
}