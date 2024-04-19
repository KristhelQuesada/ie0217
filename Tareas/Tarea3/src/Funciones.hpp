#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream>
#include <string>

/**
 * @brief Funcion que se encarga de revisar la entrada de un usuario
 * para validar su opcion en el menu.
 * @param input Entrada tipo string recibida del usuario
 * @return Un valor entero fuera del rango de las opciones permitidas
 * del menu
 */
// Prototipo de las funciones a desarrollar en Funciones.cpp
int verifyMenuOption(std::string input, int out_range);

#endif // FUNCIONES_HPP