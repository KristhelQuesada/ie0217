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