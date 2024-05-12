#include "Biblioteca.hpp"

int main() {
    // Creamos un objeto de la clase biblioteca
    Biblioteca biblioteca;

    // Agregamos 2 Libros
    biblioteca.agregarLibro("EL gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    // Mostramos los libros agregados
    biblioteca.mostrarCatalogo();

    return 0;
}