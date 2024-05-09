#include <iostream>
#include "Text_processor.hpp"

int main(int argc, char* argv[]) {

    // Si la cantidad de argumentos por linea de comandos es menor a 5
    if (argc < 5) {
        // Imprima el siguiente mensaje de error
        std::cerr << "Usage: " << argv[0] << "-f <filename> -o <outputfile> "
                     "-search <search_pattern> -replace <replace_string>\n";
    }

    // Inicializamos variables con base en los parametros recibidos
    std::string filename = argv[2];
    std::string outputfile = argv[4];
    std::string search_pattern = argv[6];
    std::string replace_string = argv[8];

    // Instanciamos un objeto de la clase TextProcessor
    TextProcessor processor(filename, outputfile);

    // Llamamos a la funcion que remplaza acorde al search_pattern indicado
    processor.replace(search_pattern, replace_string);

    return 0;
}