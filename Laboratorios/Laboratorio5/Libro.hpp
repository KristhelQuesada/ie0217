#ifndef LIBRO_HPP
#define LIBRO_HPP

/*
Clase Libro, se incluyen sus miembros y los prototipos de sus funciones.
*/

#include <string> // para el uso de string

class Libro {
    public:
        std::string titulo;   // miembro string que incluye el nombre del libro
        std::string autor;    // miembro string que incluye el nombre del autor
        int anioPublicacion;  // miembto int que incluye el anio de publicacion

        Libro(std::string t, std::string a, int anio); // constructor de la clase que
                                                       // recibe por parametro el nombre
                                                       // autor y anio e inicializa sus
                                                       // miembros segun lo que se pase por
                                                       // parametro

        bool operator<(const Libro& l) const;  // sobrecarga de operador que permite
                                               // comparar el anio entre libros y retorna
                                               // true si el anio de publicacion del actual
                                               // libro es menor al de otro objeto de la
                                               // misma clase. Necesario si se va a implementar
                                               // el uso de sort() con objetos de esta clase.
};

#endif // LIBRO_HPP