#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

// Definicion de la clase libro con los prototipos de sus funciones
class Libro {
    private:
        // Miembros publicos
        std::string titulo;
        std::string autor;

    public:
        // Miembros privados

        // Constructor
        Libro(const std::string& titulo, const std::string& autor);

        // Funcion para mostrar los atributos privados
        void mostrarInfo() const;
};

#endif // LIBRO_HPP