#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado {
    // Por default si definimos un atributo aca afuera entonces
    // se asumira por default como publico

    // Especificadores de acceso
    // Se acceden esta misma clase y amigas
    private:
        int horasTrabajadas;

    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);

        // Estamos obligados a definirlos porque era virtual puro
        double calcularPago() const override;
};

#endif // EMPLEADOPORHORAS_HPP