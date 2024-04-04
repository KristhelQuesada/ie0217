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

        // REaliza la implementacion por las {}
        virtual ~Empleado(){}

        // Metodo virtual puro porque usa const = 0
        // Necesita sobreescribirse si o si
        // Asi me garantizo que cada tipo empleado tiene su
        // manera personalizadas de calcular su pago
        virtual double calcularPago() const = 0;

        // Este no es puro
        virtual void mostrarDetalles() const;
};


#endif // EMPLEADO_HPP