#include <iostream>
#include <string>

// Usualmente esto no se usa oprar especificar de
// mejor forma de que libreria se extraen las cosas
using namespace std;

/*
Get line funciona para obtener la informacion de toda la
linea y no cortada o segmentada por espacio, por ejemplo,
si ingresamos "Hola mundo", toda esa oracion se guardaria
pero com cin entonces solo se guardaria "Hola".
*/


// Creacion de un struct tipo libro
struct Libro {
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // puntero que apunta a otra estructura del mismo tipo
};

// Creacion de un enum para hacer del codigo main algo mas modular
enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO,
    SALIR,
    OPCIONES_MAX // para saber cuantas opciones tenemos
};

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
    
    nuevoLibro->siguiente = lista; // nuevo libro, en el miembro siguiente, guardamos loq eu hay en la variable libta
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

int main() {
    // Crea una variable de tipo libro puntero que se llama
    // listalibros y que apunta nullptr
    Libro* listaLibros = nullptr;
    int opcion;

    // Menu
    do {
        cout << "Seleccione su opcion:" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBRO:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa... " << endl;
                break;
            default:
                cout << "Opcion no permitida." << endl;
                break;
        }
    } while (opcion != 3);

    // Liberar la memoria fuera del while cuando termina el programa
    liberarMemoria(listaLibros);

    return 0;
}
