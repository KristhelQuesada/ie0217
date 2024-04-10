#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>
#include "Continentes.hpp"
using namespace std;

class Pais : public Continente {
    private:
        string nombre;
    public:
        Pais(string nombre);
        void mostrarDetalles() const override;
};

#endif // PAIS_HPP