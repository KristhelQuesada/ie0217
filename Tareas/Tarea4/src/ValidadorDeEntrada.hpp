#ifndef INPUT_VERIFIER_HPP
#define INPUT_VERIFIER_HPP

class ValidadorDeEntrada {
    public:
        static bool validarTipoDato(std::string dataType);
        static bool validarDimensiones(int size);
};

#endif // INPUT_VERIFIER_HPP