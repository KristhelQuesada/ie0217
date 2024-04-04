#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
    // Acceden para esta clase y las derivadas
    protected:
        // Atributos
        std::string nombre;
        int edad;
        double salario;

    // Acceden cualquiera
    public:
        // Metodos
        Empleado(std::string _string, int _edad, double _salario);
        virtual ~Empleado(){}

        // Metodo virtual puro
        // Necesita sobreescribirse si o si
        virtual double calcularPago() const = 0;

        // Este no es puro
        virtual void mostrarDetalles() const;
};


#endif // EMPLEADO_HPP