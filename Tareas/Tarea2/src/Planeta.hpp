#ifndef PLANETA_HPP
#define PLANETA_HPP

#include <string>
using namespace std;

#define MAX_CONTINENTS 10

// Declaracion de la clases por adelantado para poder crear
// y asociar objetos de esta clase en la clase Planeta
class Continente;

class Planeta {
    // Se acceden dentro de esta clase y las derivadas
    protected:
        string nombre; // nombre del planeta
        int total_contis; // total de continentes

        // Array que contiene los punteros a cada continente
        Continente* continentes[MAX_CONTINENTS];

    // Acceden cualquiera
    public:
        // Metodos
        Planeta(string _nombre); // Prototipo del constructor
        virtual ~Planeta(){} // Implementacion del destructor
        void agregarContinente(Continente* continente); // agrega objetos continente al array
        virtual void mostrarDetalles() const; // metodo virtual que se heredara a otras clases
};

#endif // PLANETA_HPP