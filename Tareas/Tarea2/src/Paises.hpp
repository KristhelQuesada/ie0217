#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>
#include "Continentes.hpp"
using namespace std;

#define MAX_COUNTRIES 10

class Pais : public Continente {
    private:
        string nombre;

    public:
        Pais(string nombre);
        void mostrarNombre() const override;
        void mostrarDetalles() const override;
};

#endif // PAIS_HPP