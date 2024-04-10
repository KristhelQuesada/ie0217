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

#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include <string>
#include "Paises.hpp"
using namespace std;

/**
 * @class PaisPrimerMundo
 * @brief Clase derivada de Pais que representa un país del primer mundo.
 * En este caso se definieron dos miembros no implementados que eran para
 * albergar la cantidad de personas del total habitantes (miembro heredado)
 * de su clase base pais.
 */
class PaisPrimerMundo : public Pais {
    private:
        int employed; // cantidad de personas con trabajo
        int unemployed; // cantidad de personas sin trabajo

    public:
        /**
         * @brief Constructor de la clase PaisPrimerMundo.
         * @param _nombre Nombre del país del primer mundo.
         * @param _id Identificador del país del primer mundo.
         * @param _habitantes Cantidad de habitantes del país del primer mundo.
         * @param _internet5G Indica si el país del primer mundo cuenta con internet 5G.
         * @param _airport Indica si el país del primer mundo cuenta con aeropuerto.
         * @param _centerDI Indica si el país del primer mundo cuenta con centro de Investigación y Desarrollo.
         */
        PaisPrimerMundo(string _nombre, int _id, unsigned int _habitantes,
                         bool _internet5G, bool _airport, bool _centerDI); // constructor
        
        /**
         * @brief Muestra los detalles específicos del país del primer mundo.
         */    
        void mostrarDetalles() const override;
};

#endif // PAISPRIMERMUNDO_HPP