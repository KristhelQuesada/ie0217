#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>
#include <string>
using namespace std;

#define MAX_ELEMENTS 50


class Hashtable;

/**
 * @class Hashtable
 * @brief Clase 
 */
class Planeta {
    // Se acceden dentro de esta clase y las derivadas
    private:
        int capacity = MAX_ELEMENTS; // Cantidad de elementos que alberga la tabla



        // Array que contiene los punteros a cada continente
        Continente* continentes[MAX_CONTINENTS];


    // Acceden cualquiera
    public:
        // Metodos
        
};

#endif // HASHTABLE_HPP