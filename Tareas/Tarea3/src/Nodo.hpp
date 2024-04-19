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