#include <iostream>
#include <regex> 

int main() {
    // Definimos la expresion regular de tal forma que el string debe contenter
    // 'my' o 'your' adicional al string regex
    // usamos un auto const porque el tipo de variable es un regex como tal
    auto const regex = std::regex("(my|your) regex");

    // Creamos una variable tipo string que contiene "my regex"
    auto const myText = std::string("A piece of text that contains my regex");

    // aplicamos la funcion regex_search donde se pasa por parametro el string que queremos
    // analizar y la expresion regular a buscar. Lo hace como un tipo booleno ya que eso
    // es lo que retorna la funcion miembro.
    bool const myTextContainsRegex = std::regex_search(myText, regex);


    // Luego creamos otros strings con "your" y "their" antes de "regex" para ver como
    // reacciona la busqueda o el match ante la expresion regular brindada.
    auto const yourText = std::string("A piece of text that contains your regex");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    auto const theirText = std::string("A piece of text that contains their regex");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);


    // Imprimimos los resultados obtenidos
    std::cout << std::boolalpha // para que no se imprima como 1 o 0, sino como true/false
              << myTextContainsRegex << '\n'      // true
              << yourTextContainsRegex << '\n'    // true
              << theirTextContainsRegex << '\n';  // false
}