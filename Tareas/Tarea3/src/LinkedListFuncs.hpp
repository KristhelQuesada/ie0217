#ifndef LINKEDLISTFUNCS_HPP
#define LINKEDLISTFUNCS_HPP

#include "Contacto.hpp"

// Prototipo de las funciones propias de la implementacion de lista enlazada
void agregarContacto(Contacto nuevoContacto, Contacto*& lista);
void mostrarContactos(Contacto* lista);
void liberarMemoria(Contacto*& lista);

#endif // LINKEDLISTFUNCS_HPP