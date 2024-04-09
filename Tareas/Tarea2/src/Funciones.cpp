#include <iostream>
#include <string>
#include "Continentes.hpp"
#include "Funciones.hpp"

void funcionPrueba(Planeta* planeta) {
    // Crear tres objetos Continente y agregarlos al planeta
    Continente* asia = new Continente("Asia");
    Continente* america = new Continente("America");
    Continente* oceania = new Continente("Oceania");
    cout << "checkin1" << endl;

    planeta->agregarContinente(asia);
    planeta->agregarContinente(america);
    planeta->agregarContinente(oceania);
    cout << "checkin2" << endl;

    // Imprimir la información del planeta
    planeta->mostrarDetalles();

    delete asia;
    delete america;
    delete oceania;
}