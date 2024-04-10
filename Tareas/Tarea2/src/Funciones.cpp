#include <iostream>
#include <string>
#include "Paises.hpp"
#include "Funciones.hpp"

void funcionPrueba(Planeta* planeta) {
    // Crear tres objetos Continente y agregarlos al planeta
    Continente* asia = new Continente("Asia");
    Continente* america = new Continente("America");
    Continente* oceania = new Continente("Oceania");
    cout << "Checkpoint: Objetos Continente creados" << endl;

    planeta->agregarContinente(asia);
    planeta->agregarContinente(america);
    planeta->agregarContinente(oceania);
    cout << "Checkpoint: Objetos Continente agregados a Planeta" << endl;

    // Imprimir la información del planeta
    planeta->mostrarDetalles();

    // Crear 3 objetos Pais y agregarlos a los continentes
    Pais* panama = new Pais("Panama");
    Pais* colombia = new Pais("Colombia");
    Pais* australia = new Pais("Australia");
    cout << "Checkpoint: Objetos Pais creados" << endl;

    america->agregarPais(panama);
    america->agregarPais(colombia);
    oceania->agregarPais(australia);
    cout << "Checkpoint: Objetos Pais agregados a sus continentes" << endl;

    asia->mostrarDetalles();
    america->mostrarDetalles();
    oceania->mostrarDetalles();

    delete asia;
    delete america;
    delete oceania;

    delete panama;
    delete colombia;
    delete australia;
}