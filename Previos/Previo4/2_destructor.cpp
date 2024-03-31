#include <iostream>
#include <fstream>

/*
DESCRIPCION

Este programa pretende ejemplificar el funcionamiento de destructor,
con base en la diapositita 6 de la presentacion. Dicho esto, entonces,
si tenemos un constructor desde que se instancia una clase y por ende
se desencadena la creacion de un objeto. Luego, a como tenemos un cons-
tructor tambien tendremos un destructor cuya sintaxis estara dada por:

>>> ~<Mismo nombre que la clase>

Un destructor nos importa porque al menos para este ejemplo, se puede
abrir un archivo para obtener las lecturas de sus datos, entonces si
se crea un enlace para leer el archivo linea por linea, este enlace se
mantiene abierto aun asi ya se hayan terminado de leer los datos, por
tanto, lo correcto seria cerrar o cortar ese enlace. Es ahi donde entra
el destructor, entonces para este ejemplo, lo que se buscara es que una
vez se hayan ejecutado las cosas necesarias, se preguntara si el archivo
sigue abierto y si es asi pues entonces que se cierre.
*/

class Archivo {
    private:
        std::fstream archivo;

    public:
        // Constructor
        Archivo(std::string nombre_archivo) {
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);

            if (!archivo.is_open()) {
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
            }
        }

        // Destructor
        ~Archivo() {
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};


int main() {
    Archivo mi_archivo("datos.txt");

    // do something with the file

    return 0
}