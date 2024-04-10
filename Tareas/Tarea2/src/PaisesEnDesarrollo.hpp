#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include <string>
#include "Paises.hpp"
using namespace std;

class PaisEnDesarrollo : public Pais {
    private:
        string nombre;
    public:
        PaisEnDesarrollo(string nombre);
        void mostrarNombre() const override;
        void mostrarDetalles() const override;
};

#endif // PAISENDESARROLLO_HPP