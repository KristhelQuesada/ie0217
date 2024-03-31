// Header file

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

// Clase persona
class Persona{
    private:
        // Atributos privados
        string nombre;
        int edad;

    public:
        // Describimos el constructor mediante un prototipo
        Persona(string nombre, int edad);

        // Descripcion de 3 metodos mediante prototipos
        string getNombre();
        int getEdad();
        void setEdad(int Edad);
};

#endif //PERSONA_H

