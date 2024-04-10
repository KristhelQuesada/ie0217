#include <iostream>
using namespace std;

/*
DESCRIPCION
Este programa introduce el tema del uso de la memoria dinamica, utilizando
las diapositivas 4 y 5 de la presentacion. Comenzamos con la directiva 'new'
que nos va a dar una porcion de la memoria que esta en la porcion del heap,
donde su uso va a ser:
>>> <name of pointer varible> = new <type of data>
Se dice que es un pointer variable porque lo que nos retorna esta sintaxis
es la direccion de memoria, entonces si esto no fuera un puntero, no podria
funcionar. Asimismo, 'new' devuelve la direccion en memoria, en el caso de
un arreglo, de la primera posicion de este, es decir, de la posicion cero.

Consideraciones importantes:
- Le llamamos dinamico porque no lo tenemos definido desde un inicio.
- El operador new asigna memoria a una variable dinamica:
    pointerVariable = new dataType;
- Para deasignar (deallocate) la memoria ocupada por la variable dinamica:
    delete pointerVariable;
*/
class Student {
    // Private member
    private:
        int age;
    
    // Public methods
    public:
        // constructor initializes age to 12
        Student() : age(12) {}

        // method which returns the age of the student
        void getAge() {
            cout << "Age = " << age << endl;
        }
};

int main() {
    /*
    FIRST EXAMPLE
    Includes and combines the code from the slide 4 and
    the first example include in the fifth diapositive.
    */
    cout << ">>> FIRST EXAMPLE" << endl;

    // Declare an int pointer
    // para especificar que lo que vamos a almacenar en dicha
    // variable es una direccion en memoria
    int* pointInt;

    // Declare a float pointer
    float* pointFloat;

    // Dynamically allocate memory
    // aca asignamos la memoria para una variable entera y flotante
    // basicamente lo que estamos diciendo es que vamos a pedir de
    // manera manual un espacio en el heap para albergar estas variables.
    // Entonces se leeria como que la direccion de memoria dada por
    // new int y new float va a quedar almacenada en las variables
    // pointInt y pointFloat
    pointInt = new int;
    pointFloat = new float;

    // Assigning value to the memory
    // mediante referencia por el *, tal que se lee como
    // en la direccion de memoria de pointInt y pointFloat
    // guarde los siguientes valores (contenido)
    *pointInt = 45;
    *pointFloat = 45.45f;

    // Print the value stored in memory
    cout << "*pointInt is: " << *pointInt << endl; // Output: 45
    cout << "*pointFloat is: " << *pointFloat << endl; // Output: 45.45

    // Deallocate the memory, para liberar ese espacio de memoria
    // que ya no vamos a utilizar
    delete pointInt;
    delete pointFloat;


    /*
    SECOND EXAMPLE
    Includes the second example from the fifth slide
    the difference is that we are including arrays
    */
    cout << "\n>>> SECOND EXAMPLE" << endl;

    // Declaring variable int
    int num;

    // Asking user information
    cout << "Enter total number of students: ";
    cin >> num;
    
    // Declaring float pointer, that will contain
    // the memory direction of a float array
    float* ptr;

    // Memory allocation of num number of floats
    // Asignamoes de manera dinamica, un arreglo de tipo
    // flotante y de tamanio 'num'
    ptr = new float[num];

    // Adding information to all the students
    cout << "Enter GPA of students" << endl;
    
    for (int i=0; i < num; ++i) {
        // Almacene el valor agregado en la posicion dada por i
        // mediante la aritmetica de punteros
        // *(ptr + i) retorna donde inicia el siguiente flotante
        // no la direccion inmediata de el.
        cout << "Student" << i+1 << ": ";
        cin >> *(ptr + i);
    }

    // Displaying information
    cout << "\nDisplaying GPA of students:" << endl;
    for (int i=0; i < num; ++i) {
        cout << "Students" << i+1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    // se usan los corchetes para indicar que vamos a liberar
    // todo el arreglo completo.
    delete[] ptr;


    /*
    THIRD EXAMPLE
    Includes the third example from the fifth slide, the difference
    here is that we are using the theory learned but applied in the
    use of classes.
    */
    cout << "\n>>> THIRD EXAMPLE" << endl;

    // Dynamucally declare Student object
    // Creamos una variable puntero de tipo Student, que
    // contendra la direccion en memoria donde se guardara
    // dicho objeto, e inmediatamente le asignamos mediante
    // el new la direccion en memoria donde inicia el objeto
    // Student
    Student* ptr2 = new Student;

    // Call getAge() function
    // con el operador -> para especificar que de ese puntero
    // queremos extraer ese metodo
    ptr2->getAge();

    // ptr memory is realeased
    // para liberar la memoria que estaba
    // utilizando el objeto estudiante
    delete ptr2;


    return 0;
}