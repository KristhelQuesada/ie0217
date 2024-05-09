// Implementacion de la clase TextProcessor

#include "Text_processor.hpp"
#include <fstream>
#include <regex>

// Constructor
TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    : input_filename(input_filename), output_filename(output_filename){}

// Funcion que permite realizar el remplazo de search_pattern por replace_string
void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string) {
    std::ifstream input_file(input_filename);     // ifstream por input stream
    std::ofstream output_file(output_filename);   // ofstream por output stream
    std::string line;                   // tendra el contenido de cada linea del archivo

    std::regex pattern(search_pattern);           // creacion del patron regex

    // Siempre que haya input_file y output_file
    if (input_file && output_file) {

        // while para una iteracion linea por linea
        // utiliza la funcion miembro getline de la clase ifstream para leer linea a linea
        while (getline(input_file, line)) {

            // Se utiliza la funcion regex_replace para realizar el remplazo y lo almacena
            // en un string llamado replaced.
            std::string replaced = std::regex_replace(line, pattern, replace_string);

            // Luego, escribe la linea a la que se aplicaron reemplazos en al archivo de salida
            output_file << replaced << "\n";
        }
    }
}
