#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

// Creacion del prototipo clase estudiante
class Estudiante {
    public:
        // Funciones miembro
        Estudiante(const std::string& nombre, int edad); // constructor
        void mostrarDatos();                             // ver los atributos

    private:
        // Atributos priados
        std::string nombre;
        int edad;
        int edad2;
};

#endif // ESTUDIANTE_HPP