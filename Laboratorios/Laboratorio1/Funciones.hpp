#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Contacto.hpp"

/*
las variables tipo const especifica que dicha variable es constante
de tal forma que le indica al compilador que prevenga al programador
de modificarla.

1. agregar: la primera funcion es para enviar la lista de contactos
y &numcontactos es para modificar el valor o cantidad de contactos
recordemos que no se usa &array porque esta por default ya envia
la direccion del primer arreglo del array. En resumen, nos habilita
la modificacion de ambos parametros.

2. mostrar y buscar: vamos a mandar la lista de contactos de manera
constante e int numContactos solo obtiene su valor

Estas declaraciones de argumentos les llamamos firmas.
*/
void agregarContacto(Contacto listaContactos[], int &numContactos);
void mostrarContactos(const Contacto listaContactos[], int numContactos);
void buscarContacto(const Contacto listaContactos[], int numContactos);

#endif // FUNCIONES_HPP