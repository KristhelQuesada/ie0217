#ifndef OP_VERIFIER_HPP
#define OP_VERIFIER_HPP
#include "Matriz.hpp"

template<class T>
class OperacionesBasicas {
    public:
        static bool validarSumaResta(Matriz<T>&a, Matriz<T>&b);
        static bool validarMultiplicacion(Matriz<T>&a, Matriz<T>&b);

        static void suma(Matriz<T>&a, Matriz<T>&b);
        static void resta(Matriz<T>&a, Matriz<T>&b);
        static void multiplicacion(Matriz<T>&a, Matriz<T>&b);
};

#include "OperacionesBasicas.cpp"

#endif // OP_VERIFIER_HPP