#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include <string>
#include "Planeta.hpp"
using namespace std;

#define MAX_COUNTRIES 10

class Pais; // declaracion por adelantado para habilitar su uso

class Continente : public Planeta {
    private:
        string nombre; // nombre del continente
        int total_paises; // total de paises que tiene el continente

        // Array que contiene los punteros a cada pais
        Pais* paises[MAX_COUNTRIES];

    public:
        Continente(string nombre); // Constructor
        void agregarPais(Pais* pais); // agrega objetos pais al array
        virtual void mostrarNombre() const; // Despliega solo el nombre
        void mostrarDetalles() const override; // Muestra todos los detalles

        void mostrarPaises();
        Pais* buscarPais(Pais* pais);
};

#endif // CONTINENTE_HPP
