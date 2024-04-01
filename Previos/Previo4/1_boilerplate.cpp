#include <iostream>
using namespace std;

/*
DESCRIPCION
A continuacion se introduce el tema de clases, principalmente sobre el esqueleto
o boilerplate, todo con base a las diapositivas 4 y 5 de la presentacion.

A partir de la linea 12 hasta la 38 estamos definiendo la clase Molde.
*/

class Molde {
    // especificador de acceso, en este caso se utilizo 'public'
    public:
        // Atributos or data members
        double largo;
        double ancho;
        double altura;

        // Esto es el constructor de la clase, y sucede cuando utilizamos el
        // mismo nombre de la clase solo que sin el class al frente.
        // Esta es una funcion que se va a ejecutar cuando instanciemos esta
        // clase.
        Molde() {
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;
            cout << "Instanciando molde" << endl;

            largo = 15;
            ancho = 12;
            altura = 21;
        }

        // Las dos siguientes funciones son member functions
        // o metodos
        double calcularArea() {
            return largo*ancho;
        }

        double calcularVolumen() {
            return largo*ancho*altura;
        }
};


int main() {
    // Instanciar un objeto llamado pared basado en la clase Molde
    // Con la linea siguiente lo primero que sucede es la ejecucion
    // del constructor de la linea 24. Inicializa todo lo necesario
    Molde pared;

    // Impresion antes del cambio
    cout << "\nPared largo antes" << endl;
    cout << pared.largo << endl;

    // Asignar valores al objeto pared
    // Son accesibles por que sus atributos estan en public
    pared.largo = 20.0;
    pared.ancho = 13.2;
    pared.altura = 23.4;

    // Impresion luego del cambio
    cout << "\nPared largo despues" << endl;
    cout << pared.largo << endl;

    // Calcular y desplegar el area y volumen
    cout << "\nArea = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;



    return 0;
}