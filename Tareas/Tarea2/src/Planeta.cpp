// MIT License
// 
// Copyright (c) 2024 Kristhel Quesada
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/**
 * @file Planeta.cpp
 * @brief Implementación de la clase Planeta.
 *
 * Contine la implementación de las funciones miembro de la clase Planeta
 * siendo esta la clase base, que se va a encargar de hacer el vinculo con
 * las clases subsecuentes y de esa forma poder pasar por parametro unica-
 * mente el objeto planeta y que derive todo el contenido de sus clases 
 * asociadas.
 */

#include "Planeta.hpp" // Clase a trabajar
#include "Continentes.hpp" // clase que alberga
#include <iostream>

// Constructor de la clase Planeta. Inicializa el contador en cero
Planeta::Planeta(string _nombre) : nombre(_nombre), total_contis(0) {}


void Planeta::agregarContinente(Continente* continente) {
    // Condicional que controla que no podamos agregar mas continentes
    // si se supera su limite maximo.
    if (total_contis < MAX_CONTINENTS) {

        // al array que contiene la direccion en memoria de cada
        // objeto continente, actualice la variable total_contis
        // y guarde la direccion que pasamos por parametro ahi.
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

        // Verifica que se apunta a una direccion valida
        if (continentes[i] != nullptr) {

            // Imprime el nombre de los continentes
            continentes[i]->mostrarNombre();

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

    // Imprimir info de los continentes
    for (int i = 0; i < total_contis; ++i) {

        // Verifica que se apunta a una direccion valida
        if (continentes[i] != nullptr) {

            // Imprime los detalles de; continente como la lista de paises
            continentes[i]->mostrarDetalles();
        } else {
            cout << "Aca hay error" << endl;
        }
    }

}

void Planeta::mostrarCyP() {
    cout << "Considere la disponibilidad de continentes y paises por el momento." << endl;

    // Imprimir info de los continentes
    for (int i = 0; i < total_contis; ++i) {

        // Verifica que se apunta a una direccion valida
        if (continentes[i] != nullptr) {

            // Imprime los detalles de; continente como la lista de paises
            continentes[i]->mostrarPaises();
        } else {
            cout << "Aca hay error" << endl;
        }
    }
}