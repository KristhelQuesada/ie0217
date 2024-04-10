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
 * @file Continentes.cpp
 * @brief Implementación de la clase Continente.
 *
 * Contine la implementación de las funciones miembro de la clase Continente derivada
 * de la clase base Planeta, para su vinculacion respectiva.
 */

#include "Continentes.hpp" // Clase que estamos trabajando
#include "Paises.hpp" // Clase que alberga
#include <iostream>

// Constructor de la clase Continente
Continente::Continente(string _nombre) : nombre(_nombre), total_paises(0), Planeta("") {}

// Agrega un pais al continente
void Continente::agregarPais(Pais* pais) {
    // Condicional que controla que no podamos agregar mas continentes
    // si se supera su limite maximo.
    if (total_paises < MAX_COUNTRIES) {

        // al array que contiene la direccion en memoria de cada
        // objeto continente, actualice la variable total_contis
        // y guarde la direccion que pasamos por parametro ahi.
        this->paises[total_paises++] = pais;

    } else {
        cout << "Ya no se pueden agregar mas continentes, maximo alcanzado.\n";
    }
}

// Display de la informacion de la clase
void Continente::mostrarDetalles() const {
    cout << "\nEl continente " << nombre;

    if (total_paises == 0) {
        cout << " no tiene paises.";
    } else {
        cout << " tiene " << total_paises << " paises: ";
        // Imprimir los continentes
        for (int i = 0; i < total_paises; ++i) {
        
            // Verifica que se apunta a una direccion valida
            if (paises[i] != nullptr) {
            
                // Imprime el nombre de los continentes
                paises[i]->mostrarNombre();
    
                // Imprimir comas bien
                if (i == total_paises - 1) {
                    cout << endl;
                } else {
                    cout << ", ";
                }
    
    
            } else {
                cout << "Aca hay error" << endl;
            }
        }
    
        cout << ">> Descripcion de cada pais" << endl;
        // Imprimir info de los continentes
        for (int i = 0; i < total_paises; ++i) {
            // Verifica que se apunta a una direccion valida
            if (paises[i] != nullptr) {
            
                // Imprime los detalles de; continente como la lista de paises
                paises[i]->mostrarDetalles();
            } else {
                cout << "Aca hay error" << endl;
            }
        }
    }
}

// Funcion virtual de la clase Continente, solo imprimira el nombre
void Continente::mostrarNombre() const {
    cout << nombre;
}

void Continente::mostrarPaises() {
    cout << "\nEl continente " << nombre;

    if (total_paises == 0) {
        cout << " no tiene paises.";
    } else {
        cout << " tiene " << total_paises << " paises: ";
        // Imprimir los continentes
        for (int i = 0; i < total_paises; ++i) {
        
            // Verifica que se apunta a una direccion valida
            if (paises[i] != nullptr) {
            
                // Imprime el nombre de los continentes
                paises[i]->mostrarNombre();
    
                // Imprimir comas bien
                if (i == total_paises - 1) {
                    cout << "";
                } else {
                    cout << ", ";
                }
    
    
            } else {
                cout << "Aca hay error" << endl;
            }
        }
    }
        
}