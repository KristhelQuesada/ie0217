#include "LinkedListFuncs.hpp"

// Funcion que permite agregar Contacto a lista enlazada
// La sintaxis Contacto*& es la referencia de la variable puntero Contacto
// no envia la posicion de memoria, solo la referencia por ende una copia
// que es lo solicitado, ya que la lista enlazada busca almacenar una copia
// del contenido del puntero
void agregarContacto(Contacto nuevoContacto, Contacto*& lista) {
    // Crea una variable contacto puntero que
    // contendra una copia del struct Contacto
    Contacto* newContactCopy = new Contacto;

    // Copiar los datos del nuevo contacto a la copia del contacto
    newContactCopy->name = nuevoContacto.name;
    newContactCopy->phone = nuevoContacto.phone;
    
    // Agregamos la copia a la lista enlazada
    newContactCopy->siguiente = lista;
    lista = newContactCopy;

    cout << "El contacto ha sido agregado correctamente" << endl;
}

// Funcion que permite mostrar en el libro
void mostrarContactos(Contacto* lista) {
    int i; // lleva la cuenta de los contactos

    // Verifica que la lista esta vacia
    if (lista == nullptr) {
        cout << "La agenda no tiene libros" << endl;

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

// Funcion para liberar memoria
/*
Funciona de tal manera que se crea una variable temporal donde
se alberga la lista a eliminar pero antes hacerlo, hacemos que
ahora lista sea la lista siguiente, luego se borra el temp que
contenia el primer o la primer estructura creada.
*/
void liberarMemoria(Contacto*& lista) {
    while (lista != nullptr) {
        Contacto* temp = lista;
        lista = lista->siguiente;
        delete temp;
    }
}