#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include <string>
#include "Planeta.hpp"
using namespace std;

class Continente : public Planeta {
    private:
        string nombre;
    public:
        Continente(string nombre);
        void mostrarDetalles() const override;
};

#endif // CONTINENTE_HPP
