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

#ifndef LINKEDLISTFUNCS_HPP
#define LINKEDLISTFUNCS_HPP

#include "Contacto.hpp"
#include "HashTable.hpp"

// Prototipo de las funciones para implementacion de lista enlazada del Cloud
void addToCloud(std::string nombre, int numero, Contacto*& lista, Hashtable& hashTable); // agrega contacto a la lista y hashtable
void showCloudList(Contacto* lista); // muestra la informacion de toda la lista
void freeCloudData(Contacto*& lista); // libera la memoria dinamica asignada en la lista
void deleteFromCloud(std::string nombre, Contacto*& lista, Contacto* ptrContacto); // elimina un contacto del Cloud


// Prototipo de las funciones para implementacion de lista enlazada de la memoria
// no se pide que sea enlazada mas se impleneta de esta forma
void addToMemory(std::string nombre, int numero, Contacto*& lista); // agrega contacto a la lista
void showMemoryList(Contacto* lista); // muestra la informacion de toda la lista
void freeMemoryData(Contacto*& lista); // libera la memoria dinamica asignada en la lista
void deleteFromMemory(std::string nombre, Contacto*& lista); // elimina un contacto de la Memoria

#endif // LINKEDLISTFUNCS_HPP