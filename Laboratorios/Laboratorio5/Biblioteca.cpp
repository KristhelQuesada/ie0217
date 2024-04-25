#include <iostream>        // para los cout
#include <algorithm>       // para el uso de sort() y find_if()
#include "Biblioteca.hpp"

/*
Implementacion de las funciones miembro de la clase Libro
*/

// Agrega libros mediante la funcion push back que agrega el elemento
// al final del vector, pasando todo por referencia y constante para que
// no se modifique su valor pero tampoco se guarde en el vector una copia
// sino el objeto original
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

// Muestra todos los libros del vector tal que usa el const auto& para
// que no se modifique el valor que lee, el auto determine automaticamente
// el tipo de dato y & para que lea por referencia tal que se itera por
// libro todo el contenido del vector libros. Y en cada iteracion o por cada
// libro, va a imprimir su titulo, autor y anio de publicacion
void Biblioteca::mostrarLibros() {
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}

// Ordena los libros de manera ascendente porque por default el sort() lo
// hace asi y sabe que debe ser acorde al anio por la sobrecarga de operador
// que se hizo en la clase Libro. Y hace el ordenamiento desde el inicio del
// vector hasta el final de el.
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());
}


/* Funcion de busqueda que utiliza el algoritmo de la STL find_if
    Dicho algoritmo funciona de la siguiente manera:
    ---> Los dos primeros parametros definen el rango de busqueda en el vector.
    ---> El tercer argumento es un predicado dado por una funcion lambda
    ---> La funcion lambda compara si el titulo del libro iterado es igual al buscado
    ---> Si la funcion lambda retorna true entonces find_if y por consecuencia buscarLibro()
         retorna el iterador del elemento donde se activo true por primera vez
    ---> Si la funcion lambda retorna false para todos los libros dentro del rango entonces
         se retorna el iterador que corresponde a libros.end()
*/
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo; // comparacion booleana
    });
}

// Funcion que devuelve un iterador que apunta al final del vector libro lo cual
// facilita saber cuando se llego al final de la biblioteca. Es decir, se crea una
// funcion para que al preguntar cuando se acaba la biblioteca, esta respuesta este
// determinada por: cuando acaba el vector libros
std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end();
}