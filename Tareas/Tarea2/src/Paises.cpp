#include "Paises.hpp" // Clase que estamos trabajando
#include <iostream>

// Constructor de la clase Continente
Pais::Pais(string _nombre, int _id, unsigned int _habitantes, 
           bool _internet5G, bool _airport, bool _centerDI) 
: nombre(_nombre), identifier(_id), habitantes(_habitantes),
  internet5G(_internet5G), airport(_airport), centerDI(_centerDI),
  Continente("") {}

// Display de la informacion de la clase
void Pais::mostrarDetalles() const {
    cout << "- El pais " << nombre;
    cout << " tiene un identificador de " << identifier;
    cout << " y " << habitantes << " habitantes.";
    cout << " Cuenta con intenet: " << internet5G;
    cout << ". Cuenta con aeropuerto: " << airport;
    cout << ". Cuenta con centro de I&D: " << centerDI << endl;
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void Pais::mostrarNombre() const {
    cout << nombre;
}

int Pais::getIdentifier() {
    return identifier;
}