#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include <string>
#include "Paises.hpp"
using namespace std;

class PaisPrimerMundo : public Pais {
    private:
        string nombre;
    public:
        PaisPrimerMundo(string nombre);
        void mostrarNombre() const override;
        void mostrarDetalles() const override;
};

#endif // PAISPRIMERMUNDO_HPP