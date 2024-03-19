#include <iostream>
#include <cstring>
using namespace std;

/*
Este programa introduce el concepto de estructura o strucs con
base en las diapositivas 32 y 33 de la presentacion. Entonces,
las estructuras son grupos de datos, como por ejemplo un libro
el cual va a tener asociado el nombre del autor, el titulo, la
asignatura y algun ID, entonces para no tener multiples variables
llamadas autor1, autor2, ..., autorn y lo mismo para las otras
caracteristicas, se utilizan los structs.

Las estructuras tienen miembros, por ejemplo, para el struct de
Books se tienen 4 miembros (title, author, subject and book_id).
Entonces, esto conviene para una mejor organizacion de las va-
riables ya que se apegaran a un machote por asi decirlo.
*/

// Syntax to define a struct
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

struct Person {
    char name[50];
    int age;
    float salary;
};

// Function Main
int main() {
    // Declaring structures
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book
    Person p1;

    // Book1 specs
    // strcpy sirve para copiar el texto entre comillas a la
    // direccion que se le pasa por primer parametro
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // Book1 specs
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Person p1
    cout << "Enter full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // Print Book1 info
    cout << "\n\nBook 1 title: " << Book1.title << endl;
    cout << "Book 1 author: " << Book1.author << endl;
    cout << "Book 1 subject: " << Book1.subject << endl;
    cout << "Book 1 I.D: " << Book1.book_id << endl;

    // Print Book2 info
    cout << "\n\nBook 2 title: " << Book2.title << endl;
    cout << "Book 2 author: " << Book2.author << endl;
    cout << "Book 2 subject: " << Book2.subject << endl;
    cout << "Book 2 I.D: " << Book2.book_id << endl;

    // Printe p1 info
    cout << "\n\nDisplaying Information" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;


    return 0;
}