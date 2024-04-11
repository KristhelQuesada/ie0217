#include "Funciones.hpp"

// Funcion que permite agregar libro
// La sintaxis Libro*& es la referencia de la variable Libro puntero Libro*
// int &lista no envia la posicion de memoria solo la referencia pero no el
// contenido de la referencia
void agregarLibro(Libro*& lista) {
    Libro* nuevoLibro = new Libro;

    cout << "Ingrese el titulo del libro: " << endl;
    cin.ignore();
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: " << endl;
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl;
    getline(cin, nuevoLibro->genero);
    
    /*
    La siguiente linea se lee asi:
    En nuevoLibro, vamos a acceder al miembro "siguiente" y vamos agregar
    lo que venia o contiene 'lista'.
    */
    nuevoLibro->siguiente = lista;
    lista = nuevoLibro;

    cout << "Libro agregado correctamente" << endl;
}

// Funcion que permite mostrar en el libro
void mostrarLibros(Libro* lista) {
    // Verifica que la lista esta vacia
    if (lista == nullptr) {
        cout << "La libreria no tiene libros" << endl;

        return; // para evitar ejecutar el while y cout cuando se cumple esta condicion
    }

    // Imprime la lista
    cout << "Lista de Libros: " << endl;
    while (lista != nullptr) {
        cout << "Titulo: " << lista->titulo << endl;
        cout << "Autor: " << lista->autor << endl;
        cout << "Genero: " << lista->genero << endl << endl;

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
void liberarMemoria(Libro*& lista) {
    while (lista != nullptr) {
        Libro* temp = lista;
        lista = lista->siguiente;
        delete temp;
    }
}