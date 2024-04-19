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

#ifndef NODO_HPP
#define NODO_HPP

#include "Contacto.hpp" // Para usar la estructura contacto

/*
Struct para crear una lista enlazada en el hashtable.
Ya que se busca manejar las colisiones mediante direct chaining,
entonces se construye una estructura nodo para crear la lista
enlazada que contiene cada bucket del hash. En este caso se defi-
ne que el valor que contendra cada nodo sera un puntero de tipo
Contacto. Aca se guardara la direccion en memoria del contacto
con base en la lista enlazada del Cloud.

De esta manera, mediante Nodo se pueden recorrer elementos con un
mismo key sin tener que asignar otro puntero de 'siguiente' dife-
rente del que ya traia Contacto por la lista enlazada.
*/
struct Nodo {
    Contacto* ptrContactValue; // almacena un puntero contacto
    Nodo* siguiente; // puntero busc apunta a otra es'tructura del mismo tipo
};


#endif // NODO_HPP