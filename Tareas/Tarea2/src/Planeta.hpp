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
 * @file Planeta.hpp
 * @brief Definición de la clase Planeta donde se albergan objetos de la clase Continente.
 * 
 * En este archivo se definen los prototipos de la clase Planeta, donde se tendran miembros
 * como el nombre del planeta, la cantidad total de continentes que se actualiza cada que se
 * agregue uno nuevo, ademas un array que contiene las direcciones en memoria donde se ubi-
 * can objetos de la clase continente.
 */


#ifndef PLANETA_HPP
#define PLANETA_HPP

#include <string>
using namespace std;

#define MAX_CONTINENTS 10

// Declaracion de la clases por adelantado para poder crear
// y asociar objetos de esta clase en la clase Planeta
/**
 * @class Continente
 * @brief Clase que representa un continente con objetos Pais.
 * 
 * Continente es una clase que se define por adelantado para
 * poder declarar su dependiencia sin necesidad de haber creado
 * la clase previamente.
 */
class Continente;

/**
 * @class Planeta
 * @brief Clase que representa un planeta con objetos Continente.
 * 
 * Planeta es una clase que permite agregar y mostrar todos los
 * elementos asociados a dicho planeta, asi como continentes, paises
 * que alberga cada continente y que tipo de pais con sus detalles.
 */
class Planeta {
    // Se acceden dentro de esta clase y las derivadas
    protected:
        string nombre; // nombre del planeta
        int total_contis; // total de continentes

        // Array que contiene los punteros a cada continente
        Continente* continentes[MAX_CONTINENTS];

    // Acceden cualquiera
    public:
        // Metodos
        /**
         * @brief Constructor de la clase Planeta.
         * @param nombre Nombre del planeta.
         */
        Planeta(string _nombre); // Prototipo del constructor

        /**
         * @brief Destructor de la clase Planeta.
         */
        virtual ~Planeta(){} // Implementacion del destructor

        /**
         * @brief Permite agregar continentes al planeta.
         * @param continente Direccion en memoria del objeto continente.
         */
        void agregarContinente(Continente* continente); // agrega objetos continente al array

        /**
         * @brief Funcion virtual que se redefine
         */
        virtual void mostrarDetalles() const; // metodo virtual que se heredara a otras clases

        /**
         * @brief Permite desplegar los continentes y sus respectivos paises.
         * Esta funcion se buscaba llamar en la opcion 3 y 4 del programa para mostrarle
         * al usuario en que continentes podia agregar los paises o de donde podia elimi-
         * narlos.
         */
        void mostrarCyP(); // muestra los continentes y sus paises
};

#endif // PLANETA_HPP