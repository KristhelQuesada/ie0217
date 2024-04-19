#ifndef LINKEDLISTFUNCS_HPP
#define LINKEDLISTFUNCS_HPP

#include "Contacto.hpp"
#include "HashTable.hpp"

// Prototipo de las funciones para implementacion de lista enlazada del Cloud
void addToCloud(std::string nombre, int numero, Contacto*& lista, Hashtable& hashTable); // agrega contacto a la lista y hashtable
void showCloudList(Contacto* lista); // muestra la informacion de toda la lista
void freeCloudData(Contacto*& lista); // libera la memoria dinamica asignada en la lista


// Prototipo de las funciones para implementacion de lista enlazada de la memoria
// no se pide que sea enlazada mas se impleneta de esta forma
void addToMemory(std::string nombre, int numero, Contacto*& lista); // agrega contacto a la lista
void showMemoryList(Contacto* lista); // muestra la informacion de toda la lista
void freeMemoryData(Contacto*& lista); // libera la memoria dinamica asignada en la lista

#endif // LINKEDLISTFUNCS_HPP