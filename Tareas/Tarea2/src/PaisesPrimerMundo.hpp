#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include <string>
#include "Paises.hpp"
using namespace std;

class PaisPrimerMundo : public Pais {
    private:
        int employed; // cantidad de personas con trabajo
        int unemployed; // cantidad de personas sin trabajo
    public:
        PaisPrimerMundo(string _nombre, int _id, unsigned int _habitantes,
                         bool _internet5G, bool _airport, bool _centerDI); // constructor
        
        void mostrarDetalles() const override;
};

#endif // PAISPRIMERMUNDO_HPP