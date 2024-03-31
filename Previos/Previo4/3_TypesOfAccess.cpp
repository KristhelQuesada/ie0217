#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa busca explicar los tipos de acceso dentro de una clase
con base en la diapositiva 7 de la presentacion. Entonces, dentro de
un programa se tendran 3 tipo de especificadores de acceso:

- Public: Todas las clases y funciones pueden acceder a los elementos.
- Private: No se pueden acceder a los elementos fuera de su clase, a
excepcion de las clases o funciones amigas.
- Protected: Como los privados solo que las clases derivadas si tienen
acceso a sus elementos.

Aca vemos ejemplificado lo que seria el concepto de encapsulacion puesto
que se nos es posible a partir de los especificadores de acceso, ocultar
cosas dependiendo de la aplicacion que estemos desarrollando.
*/

class Animal{
    public:
        void setEdad(int age) {
            edad = age;
        }

        int getEdad() {
            return edad;
        }


    protected:
        string nombre;

    
    private:
        int edad;
};

// Herencia: le atribuimos a la clase perro las caracteristicas
// de la clase animal.
class Perro : public Animal {
    public:
        void setNombre(string n) {
            nombre = n;
        }

        string getNombre() {
            return nombre;
        }
};


int main(){
    // Instanciar un objeto llamado miPerro clase Perro
    Perro miPerro;

    // Agregar atributos
    miPerro.setNombre("Toby"); // class Perro atribute
    miPerro.setEdad(3); // base class atribute

    // Impresion de los atributos
    cout << "Mi perro se llama " << miPerro.getNombre();
    cout << " y tiene " << miPerro.getEdad() << " anios" << endl;

    // This can't be done because of the types of access.
    // cout << "Esto es miPerro.nombre " << miPerro.nombre << endl;
    // cout << "Esto es miPerro.edad " << miPerro.edad << endl;


    return 0;
}