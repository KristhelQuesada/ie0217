#include "PaisesPrimerMundo.hpp" // Clase que estamos trabajando
#include <iostream>

// Constructor de la clase Continente
PaisPrimerMundo::PaisPrimerMundo(string _nombre, int _id, unsigned int _habitantes,
                                 bool _internet5G, bool _airport, bool _centerDI)
 : Pais(_nombre, _id, _habitantes, _internet5G, _airport, _centerDI) {}

// Display de la informacion de la clase
void PaisPrimerMundo::mostrarDetalles() const {
    cout << nombre;
}