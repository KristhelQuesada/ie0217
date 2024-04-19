#include <iostream>
#include <string>
#include "LinkedListFuncs.hpp"
using namespace std;

/*
------------------------------------------------------------------
FUNCIONES PARA LA LISTA ENLAZADA DEL CLOUD
*/
void addToCloud(string nombre, int numero, Contacto*& lista, Hashtable& hashTable){
    Contacto* contactCopy = new Contacto;
    contactCopy->name.assign(nombre);
    contactCopy->phone = numero;
    contactCopy->siguiente = lista;
    lista = contactCopy;

    cout << "Contacto agregado correctamente al Cloud" << endl;
    
    // Implementacion de agregar contacto al hash pendiente aca
    // agregue codigo aca
    hashTable.insertItem(nombre, contactCopy);

}



void showCloudList(Contacto* lista){
    int i; // lleva la cuenta de los contactos

    // Verifica que la lista esta vacia
    if (lista == nullptr) {
        cout << "La agenda no tiene contactos" << endl;

        return; // para evitar ejecutar el while y cout cuando se cumple esta condicion
    }

    // Imprime la lista
    while (lista != nullptr) {
        i++;
        cout << ">> Contacto " << i << ": ";
        cout << lista->name << ", Tel. ";
        cout << lista->phone << endl;

        lista = lista->siguiente;
    }

    // Implementacion de la impresion de la hashtable
    // agregue codigo aca
}



void freeCloudData(Contacto*& lista){
    while (lista != nullptr) {
        Contacto* temp = lista;
        lista = lista->siguiente;
        delete temp;
    }
}



/*
------------------------------------------------------------------
FUNCIONES PARA LA LISTA ENLAZADA DE LA MEMORIA
*/
void addToMemory(string nombre, int numero, Contacto*& lista){
    Contacto* contactCopy = new Contacto;
    contactCopy->name.assign(nombre);
    contactCopy->phone = numero;
    contactCopy->siguiente = lista;
    lista = contactCopy;

    cout << "Contacto agregado correctamente a la memoria" << endl;

}



void showMemoryList(Contacto* lista){
    int i; // lleva la cuenta de los contactos

    // Verifica que la lista esta vacia
    if (lista == nullptr) {
        cout << "La agenda no tiene contactos" << endl;

        return; // para evitar ejecutar el while y cout cuando se cumple esta condicion
    }

    // Imprime la lista
    while (lista != nullptr) {
        i++;
        cout << ">> Contacto " << i << endl;
        cout << "Nombre: " << lista->name << endl;
        cout << "Telefono: " << lista->phone << endl << endl;

        lista = lista->siguiente;
    }
}



void freeMemoryData(Contacto*& lista){
    while (lista != nullptr) {
        Contacto* temp = lista;
        lista = lista->siguiente;
        free(temp);
    }
}