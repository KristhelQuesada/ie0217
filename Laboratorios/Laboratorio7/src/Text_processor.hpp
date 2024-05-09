#ifndef TEXT_PROCESSOR_HPP
#define TEXT_PROCESSOR_HPP

#include <string>

class TextProcessor {
    private:
        std::string input_filename;   // archivo de entrada
        std::string output_filename;  // archivo donde se genera la salida

    public:
        // Uso de const para que no sea modificado su valor original y la compilacion sea mas optima
        // Constructor
        TextProcessor(const std::string& input_filename, const std::string& output_filename);

        // Funcion para remplazar un string segun lo indique el search_pattern
        void replace(const std::string& search_pattern, const std::string& replace_string);
};

#endif // TEXT_PROCESSOR_HPP