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

#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>
#include "Continentes.hpp"
using namespace std;

#define MAX_COUNTRIES 10

/**
 * @class Pais
 * @brief Clase que representa un Pais y hereda ciertas caracteristicas.
 * 
 * Pais es una clase que pretende ser la base para dos clases derivadas
 * donde su proposito esta en almacenar miembros protegidos para que 
 * dichas clases tenga acceso a ellas y ademas funciones publicas para que
 * amas derivadas puedan usarlas.
 */
class Pais : public Continente {    
    protected:
        string nombre; // nombre del pais
        float pib; // almacena el Producto Interno Bruto del pais
        unsigned int habitantes; // almacena la cantidad de habitantes
        int identifier; // identificador del pais
        bool internet5G; // por si hay internet 5G
        bool airport; // por si hay aeropuerto
        bool centerDI; // por si hay centro de Investigacion y Desarrollo


    public:
        /**
         * @brief Constructor de la clase Pais.
         * @param _nombre Nombre del país.
         * @param _id Identificador del país.
         * @param _habitantes Cantidad de habitantes del país.
         * @param _internet5G Indica si el país cuenta con internet 5G.
         * @param _airport Indica si el país cuenta con aeropuerto.
         * @param _centerDI Indica si el país cuenta con centro de Investigación y Desarrollo.
         */
        Pais(string _nombre, int _id, unsigned int _habitantes,
             bool _internet5G, bool _airport, bool _centerDI); // constructor
        
        /**
         * @brief Muestra el nombre del país.
         */
        void mostrarNombre() const override; // muestra el nombre del pais unicamente

        /**
         * @brief Muestra todos los detalles del pais.
         */
        void mostrarDetalles() const override; // muestra todos los detalles del pais

        /**
         * @brief Calculo el producto interno bruto de cada pais.
         */
        void calcularPIB();
        
        /**
         * @brief Retorna el valor del PIB del país.
         * @return pib
         */
        float getPIB();

        /**
         * @brief Retorna el identificador de cada pais
         * @return identifier o identificador del pais
         */
        int getIdentifier();

        /**
         * @brief Verifica si el país cuenta con internet 5G.
         * @return true si el país cuenta con internet 5G, false en caso contrario.
         */
        bool getInternet5G();

        /**
         * @brief Verifica si el país cuenta con aeropuerto.
         * @return true si el país cuenta con aeropuerto, false en caso contrario.
         */
        bool getAirport();

        /**
         * @brief Verifica si el país cuenta con centro de Investigación y Desarrollo.
         * @return true si hay Centro de Inestigacion y Desarrollo, de lo contrario false
         */
        bool getCenterDI();

        /**
         * @brief Retorna la cantidad de habitantes de cada pais
         * @return habitantes
         */
        unsigned int getHabitants();

};

#endif // PAIS_HPP