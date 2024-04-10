#include "Paises.hpp" // Clase que estamos trabajando
#include "Funciones.hpp"
#include <iostream>

// Constructor de la clase Continente
Pais::Pais(string _nombre, int _id, unsigned int _habitantes, 
           bool _internet5G, bool _airport, bool _centerDI) 
: nombre(_nombre), identifier(_id), habitantes(_habitantes),
  internet5G(_internet5G), airport(_airport), centerDI(_centerDI),
  Continente("") {
    calcularPIB();
  }

// Display de la informacion de la clase
void Pais::mostrarDetalles() const {
    cout << "- El pais " << nombre;
    cout << " tiene un identificador de " << identifier;
    cout << ", " << habitantes << " habitantes";
    cout << " y un PIB de " << pib << " billones de USD.";
    cout << " Cuenta con intenet: " << internet5G;
    cout << ". Cuenta con aeropuerto: " << airport;
    cout << ". Cuenta con centro de I&D: " << centerDI << endl;

    if (checkPrimo(identifier) == true) {
        cout << "Es un pais de primer mundo" << endl;
    } else {
        cout << "Es un pais en desarrollo" << endl;
    }
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void Pais::mostrarNombre() const {
    cout << nombre;
}

int Pais::getIdentifier() {
    return identifier;
}

void Pais::calcularPIB() {
    pib = static_cast<double>(rand() % 1000 + 10);
}

float Pais::getPIB() {
    return pib;
}

bool Pais::getInternet5G() {
    return internet5G;
}

bool Pais::getAirport() {
    return airport;
}

bool Pais::getCenterDI() {
    return centerDI;
}

unsigned int Pais::getHabitants() {
    return habitantes;
}