#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>
#include "Continentes.hpp"
using namespace std;

#define MAX_COUNTRIES 10

class Pais : public Continente {    
    protected:
        string nombre; // nombre del pais
        unsigned int pib; // almacena el Producto Interno Bruto del pais
        unsigned int habitantes; // almacena la cantidad de habitantes
        int identifier; // identificador del pais
        bool internet5G; // por si hay internet 5G
        bool airport; // por si hay aeropuerto
        bool centerDI; // por si hay centro de Investigacion y Desarrollo


    public:
        Pais(string _nombre, int _id, unsigned int _habitantes,
             bool _internet5G, bool _airport, bool _centerDI); // constructor
        
        void mostrarNombre() const override; // muestra el nombre del pais unicamente
        void mostrarDetalles() const override; // 

        void calcularPIB() const;

        int getIdentifier();
};

#endif // PAIS_HPP