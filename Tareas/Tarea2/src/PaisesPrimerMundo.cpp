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
 * @file PaisesPrimerMundo.cpp
 * @brief Implementación de la clase PaisPrimerMundo.
 *
 * Contine la implementación de las funciones miembro de la clase PaisPrimerMundo derivada
 * de la clase base Pais para representar países de primer mundo con características específicas.
 */

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