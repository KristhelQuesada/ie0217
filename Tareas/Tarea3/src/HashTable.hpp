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

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "Nodo.hpp" // Para usar la estructura contacto
#define MAX_ELEMENTS 10 // Cantidad de maxima buckets del hashtable

/**
 * @class Hashtable
 * @brief Clase que define la estructura de datos Hash Table.
 * Esta permite recibir un nombre y hacer el hashing para asignar
 * el valor a un index correspondiente.
 */
class Hashtable {
    private: // Only this class and derivates have access
        Nodo* tablaHash[MAX_ELEMENTS]; // array de listas enlazadas
                                       // donde cada lista es un bucket

    public: // Anyone can access
        Hashtable(); // constructor
        void insertItem(std::string key, Contacto* value); // permite insertar un elemento
        Contacto* deleteItem(std::string key); // permite eliminar un nodo y retornar su valor
        void displayHash(); // Despliega la informacion del hashtable
        int hashFunction(std::string key); // Realizar la operacion de hashing
        void freeHashTable(); // Para liberar la memoria
        
};

#endif // HASHTABLE_HPP