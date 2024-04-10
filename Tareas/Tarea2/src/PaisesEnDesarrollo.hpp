#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include <string>
#include "Paises.hpp"
using namespace std;

class PaisEnDesarrollo : public Pais {    
    public:
        PaisEnDesarrollo(string _nombre, int _id, unsigned int _habitantes,
                         bool _internet5G, bool _airport, bool _centerDI); // constructor
        
        //void mostrarDetalles() const override;
};

#endif // PAISENDESARROLLO_HPP