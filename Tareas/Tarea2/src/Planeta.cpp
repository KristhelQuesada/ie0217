#include "Planeta.hpp" // Clase a trabajar
#include "Continentes.hpp" // clase que alberga
#include <iostream>

// Constructor de la clase Planeta
Planeta::Planeta(string _nombre) : nombre(_nombre), total_contis(0) {}


void Planeta::agregarContinente(Continente* continente) {
    // Condicional que controla que no podamos agregar mas continentes
    // si se supera su limite maximo.
    if (total_contis < MAX_CONTINENTS) {
        // al array que contiene la direccion en memoria de cada
        // objeto continente, actualice la variable total_contis
        // y guarde la direccion que pasamos por parametro ahi.
        cout << "Continente: " << continente << endl;
        cout << "Total Continentes: " << total_contis << endl;
        this->continentes[total_contis++] = continente;

    } else {
        cout << "Ya no se pueden agregar mas continentes, maximo alcanzado.\n";
    }
}


// Funcion virtual de la clase Planeta
void Planeta::mostrarDetalles() const {
    cout << "El planeta " << nombre;
    cout << " tiene " << total_contis << " continentes: ";

    // Imprimir los continentes
    for (int i = 0; i < total_contis; ++i) {
        if (continentes[i] != nullptr) {
            continentes[i]->mostrarDetalles();

            // Imprimir comas bien
            if (i == total_contis - 1) {
                cout << endl;
            } else {
                cout << ", ";
            }


        } else {
            cout << "Aca hay error" << endl;
        }
    }
}