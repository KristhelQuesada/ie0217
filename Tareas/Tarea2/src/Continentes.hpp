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

#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include <string>
#include "Planeta.hpp"
using namespace std;

#define MAX_COUNTRIES 10

/**
 * @class Pais
 * @brief Clase que representa un Pais y heredara ciertas caracteristicas.
 * 
 * Pais es una clase que se define por adelantado para poder declarar
 * su dependiencia o relacion con la clase Contineneresin necesidad de
 * haber creado la clase previamente.
 */
class Pais; // declaracion por adelantado para habilitar su uso

/**
 * @class Continente
 * @brief Clase que representa un continente con objetos Pais.
 * 
 * Continente es una clase que permite agregar y mostrar todos los
 * elementos asociados a dicho continente y a sus paises asociados.
 */
class Continente : public Planeta {
    private:
        string nombre; // nombre del continente
        int total_paises; // total de paises que tiene el continente

        // Array que contiene los punteros a cada pais
        Pais* paises[MAX_COUNTRIES];

    public:
        /**
         * @brief Constructor de la clase Continente.
         * @param nombre Nombre del continente.
         */
        Continente(string nombre); // Constructor

        /**
         * @brief Permite agregar paises al continentes.
         * @param pais Direccion en memoria del objeto pais.
         * Dicho parametro se obtiene mediante el operador de referencia
         * cuando se utilice dicha funcion.
         */
        void agregarPais(Pais* pais); // agrega objetos pais al array

        /**
         * @brief Muestra unicamente el nombre de la clase.
         */
        virtual void mostrarNombre() const; // Despliega solo el nombre

        /**
         * @brief Muestra gran informacion del continente y sus paises.
         * Se define en la primera opcion para desplegar toda la informacion
         * necesaria
         */
        void mostrarDetalles() const override; // Muestra todos los detalles

        /**
         * @brief Muestra solos el nombre del continente y sus paises.
         * FUnciona para desplegar una lista de paises unicamente.
         */
        void mostrarPaises();

        /**
         * @brief Funcion NO implementada.
         * @param pais Direccion de memoria de un objeto pais.
         * Pretendia ayudar en la opcion de eliminar pais, para que asi
         * su busqueda fuese mas sencilla.
         */
        Pais* buscarPais(Pais* pais);
};

#endif // CONTINENTE_HPP
