#include "Funciones.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos) {
    // instancia una nueva variable tipo contacto
    Contacto nuevoContacto;

    // El happy path es confiar a ciegas
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;

    std::cout << "Ingrese el nombre del telefono: ";
    std::cin >> nuevoContacto.telefono;

    // We add contacto y el ++ para actualizar el valor de numcontactos +1
    // por ende al agregar el siguiente contacto o agrega en la siguiente
    // posicion.
    listaContactos[numContactos++] = nuevoContacto;
}

void mostrarContactos(const Contacto listaContactos[], int numContactos) {
    std::cout << "Lista de contactos:\n";

    // Despliega la lista de contactos
    for (int i=0; i<numContactos; ++i) {
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
    }
}

void buscarContacto(const Contacto listaContactos[], int numContactos) {
    std::string nombreBusqueda; //instancia variable tipo busqueda
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;

    /*
    inicializacion de la bandera de encontrado, en el instante en que en
    el for se encuentre el nombre entonces pasa a ser true y se detiene
    la busqueda
    */
    bool encontrado = false;

    // Algoritmo de busqueda
    for (int i=0; i<numContactos; i++) {
        if (listaContactos[i].nombre == nombreBusqueda) {
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
            encontrado = true;
            break; // optimiza, porque si ya lo encontre para que quiero seguir revisando
        }
        if (!encontrado){
            std::cout << "Contacto no encontrado.\n";
        }
    }
}