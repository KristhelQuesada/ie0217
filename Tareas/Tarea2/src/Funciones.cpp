#include <iostream>
#include <string>
#include "PaisesPrimerMundo.hpp"
#include "PaisesEnDesarrollo.hpp"
#include "Funciones.hpp"

void funcionPrueba(Planeta* planeta) {
    // Crear tres objetos Continente y agregarlos al planeta
    Continente asia("Asia");
    Continente america("America");
    Continente oceania("Oceania");
    cout << "Checkpoint: Objetos Continente creados" << endl;

    planeta->agregarContinente(&asia);
    planeta->agregarContinente(&america);
    planeta->agregarContinente(&oceania);
    cout << "Checkpoint: Objetos Continente agregados a Planeta" << endl;

    // Imprimir la información del planeta
    planeta->mostrarDetalles();

    // Crear 3 objetos Pais y agregarlos a los continentes
    PaisEnDesarrollo panama("Panama");
    Pais colombia("Colombia");
    Pais australia("Australia");
    cout << "Checkpoint: Objetos Pais creados" << endl;
//
    america.agregarPais(&panama);
    america.agregarPais(&colombia);
    oceania.agregarPais(&australia);
    cout << "Checkpoint: Objetos Pais agregados a sus continentes" << endl;

    asia.mostrarDetalles();
    america.mostrarDetalles();
    oceania.mostrarDetalles();
    
}