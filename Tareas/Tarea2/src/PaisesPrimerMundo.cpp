#include "PaisesPrimerMundo.hpp" // Clase que estamos trabajando
#include <iostream>

// Constructor de la clase Continente
PaisPrimerMundo::PaisPrimerMundo(string _nombre) : nombre(_nombre), Pais("") {}

// Display de la informacion de la clase
void PaisPrimerMundo::mostrarDetalles() const {
    cout << nombre;
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void PaisPrimerMundo::mostrarNombre() const {
    cout << nombre;
}