#include <iostream>         // para los cout
#include "Biblioteca.hpp"

int main() {
    // Declara objeto de tipo Biblioteca
    Biblioteca miBiblioteca;

    // Inicializa algunos libros que son objetos de la clase Libro
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});

    // Mod1 del main
    // Despliega los libros del vector que contiene la Biblioteca pero antes
    // de ordenarlo
    std::cout << ">> Libros antes de ordenarlos por anio" << std::endl;
    miBiblioteca.mostrarLibros();
    std::cout << "\n";

    // Ordena de manera ascendente y por anio de publicacion los libros que
    // contiene el miembro vector de objetos libros de la Biblioteca
    miBiblioteca.ordenarLibrosPorAnio();

    // Despliega los libros del vector que contiene la Biblioteca pero de
    // manera ordenada
    std::cout << ">> Libros antes de ordenarlos por anio" << std::endl;
    miBiblioteca.mostrarLibros();
    std::cout << "\n";

    // Aplica la funcion buscarLibroPorTitulo que devuelve un iterador
    std::cout << "Buscando Libros..." << std::endl;
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");

    // Si dicho iterador es diferente del iterador final (ya que por default
    // la funcion find_if retorna este iterador si no hubo coincidencias) en-
    // tonces imprima el libro encontrado
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;

        // si el iterador si fue igual al final de la biblioteca entonces
        // sabemos que no hubo coincidencia y por tanto se imprime tal
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }



    // Mod2 del main
    // Buscar un libro que no esta en la biblioteca
    auto libro2 = miBiblioteca.buscarLibroPorTitulo("A brave new world");

    if (libro2 != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro2->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }



    // Mod3 del main
    // Si agrego un libro con el mismo anio cual se pone primero
    // luego de ordenarlo?
    miBiblioteca.agregarLibro({"Muerte en Venecia", "Tomas Mann", 1954});
    miBiblioteca.ordenarLibrosPorAnio();
    std::cout << "\n>> Libros por tercera vez" << std::endl;
    miBiblioteca.mostrarLibros();
    std::cout << "\n"; // se almacena despues del primero con 1954



    // Mod4 del main
    // Agregar un libro repetido
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.ordenarLibrosPorAnio();
    std::cout << "\n>> Libros por cuarta vez" << std::endl;
    miBiblioteca.mostrarLibros(); // es posible



    // Mod5 del main
    // Impresion de un libro especifico, conociendo previamente el tamanio del vector
    bool detener = false;
    int opcion;
    int posicion_input;

    // Para que sea reoetittivo hasta que no se quiera
    while (!detener) {
        std::cout << "\nHay 5 libros en la biblioteca, desea ver una posicion en especifico:\n";
        std::cout << "1. Si\n";
        std::cout << "2. No\n";
        std::cout << "Escoja: ";
        std::cin >> opcion;

        // Logica para las opciones si, no y default (error int digitado)
        switch(opcion) {
            case 1:
                std::cout << "Indique la posicion [1-5]: ";
                std::cin >> posicion_input;

                // Verificar que esta dentro del rango
                if (posicion_input >= 1 && posicion_input <= 5) {
                    // Determinamos la posicion con base a la funcion .end()
                    // Restamos a seis, porque son 6 posiciones contando el beyond,
                    // luego le restamos la posicion del usuario para asi obtener
                    // el equivalente en posicion
                    auto libroFInal = miBiblioteca.end() - (6 - posicion_input);
                    std::cout << "El libro es " << libroFInal->titulo << " de ";
                    std::cout << libroFInal->autor << " del ";
                    std::cout << libroFInal->anioPublicacion << std::endl;
                } else {
                    std::cout << "Su opcion se sale del rango permitido.\n";
                }
                break;

            case 2:
                std::cout << "Ok.\n";
                detener = true; // detenga el while
                break;

            default:
                std::cout << "Su opcion no fue valida\n";
                break;
        }

    }


    return 0;
}
