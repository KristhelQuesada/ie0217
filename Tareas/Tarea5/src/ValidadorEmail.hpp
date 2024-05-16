// MIT License
// 
// Copyright (c) 2024 Kristhel Quesada
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef EMAIL_VERIFIER_HPP
#define EMAIL_VERIFIER_HPP

#include <string>

/**
 * @class ValidadorEmail
 * @brief Clase que permite la validacion de una direccion de correo
 * electronico mediante una funcion.
 */
class ValidadorEmail {
    public:
        /**
         * @brief Funcion que se encarga de validar el correo electronico
         * que ingresa el usuario.
         * @param email Entrada tipo string constante que representa el email del usuario
         * @return True si todo sale bien, de lo contrario lanza una excepcion
         */
        static bool verifyEmail(const std::string& email);
};

#endif // EMAIL_VERIFIER_HPP