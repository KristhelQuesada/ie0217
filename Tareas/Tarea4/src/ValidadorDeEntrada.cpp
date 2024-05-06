// Implementacion de la clase ValidadorDeEntrada
#include <string>
#include "ValidadorDeEntrada.hpp"

bool ValidadorDeEntrada::validarTipoDato(std::string dataType) {
    if (dataType == "int" || dataType == "float" || dataType == "complex") {
        return true;
    } else {
        return false;
    }
}


bool ValidadorDeEntrada::validarDimensiones(int size) {
    if (size <= 0) {
        return false;
    } else {
        return true;
    }
}