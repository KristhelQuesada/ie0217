#ifndef OP_VERIFIER_HPP
#define OP_VERIFIER_HPP

class ValidacionDeOperaciones {
    public:
        static validarSumaResta(Matriz<Template>&a, Matriz<Template>&b);
        static validarMultiplicacion(Matriz<Template>&a, Matriz<Template>&b);

        static suma(Matriz<Template>&a, Matriz<Template>&b);
        static resta(Matriz<Template>&a, Matriz<Template>&b);
        static multiplicacion(Matriz<Template>&a, Matriz<Template>&b);
}

#endif