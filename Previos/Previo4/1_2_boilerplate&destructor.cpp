#include <iostream>
using namespace std;

/*
DESCRIPCION
A continuacion se introduce el tema de clases, principalmente sobre el esqueleto
o boilerplate, todo con base a las diapositivas 4 y 5 de la presentacion.
Esta es una continuacion del archivo 1_boilerplate.cpp pero donde se detalla otro
formato para la definicion del constructor. En este caso, el constructor lo que
hace es asociar a sus distintos atributos lo que se nos pase por parametro, solo
que con la diferencia de que vamos a especificar su relacion uno a uno.
- Asimismo, se exploran algunos conceptos del destructor. Por ejemplo, que el
destructor se ejecuto unicamente al final, cuando ya se hayan ejecutado las demas
instrucciones.
*/

class Molde {
    // especificador de acceso, en este caso se utilizo 'public'
    public:
        // data members
        double largo;
        double ancho;
        double altura;

        // El constructor puede tener este otro formato
        // Se definen los parametros
        // Luego se asocia atributo con parametro de la forma
        // atributo(parametro)
        Molde(double largo_p, double ancho_p, double altura_p) : largo(largo_p), ancho(ancho_p), altura(altura_p) {
            cout<< "Probando si se puede imprimir" << endl;
        }

        ~Molde() {
            cout<< "\nSaludos desde el destructor de la clase molde" << endl;
        }

        /*
        Es lo mismo que utilizar:


        Molde(double largo_p, double ancho_p, double altura_p) {
            largo = largo_p;
            ancho = ancho_p;
            altura = altura_p;

        }
        */
        

        // Las dos siguientes funciones son member functions
        double calcularArea() {
            return largo*ancho;
        }

        double calcularVolumen() {
            return largo*ancho*altura;
        }
};


int main() {
    // Instanciar un objeto llamado pared basado en la clase Molde
    Molde pared(10.0, 20.0, 35.0);

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