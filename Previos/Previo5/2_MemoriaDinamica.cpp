#include <iostream>
using namespace std;

/*
DESCRIPCION

Consideraciones importantes:
- El operador new asigna memoria a una variable dinamica:
    pointerVariable = new dataType;
- Para deasignar (deallocate) la memoria ocupada por la variable dinamica:
    delete pointerVariable;
*/
class Student {
    private:
        int age;
    
    public:
        // constructor initializes age to 12
        Student() : age(12) {}

        void getAge() {
            cout << "Age = " << age << endl;
        }
};

int main() {
    /*
    FIRST EXAMPLE
    Includes and combines the code from the diapositives 4 and
    the first example include in the fifth diapositive.
    */
    cout << ">>> FIRST EXAMPLE" << endl;

    // Declare an int pointer
    int* pointInt;

    // Declare a float pointer
    float* pointFloat;

    // Dynamically allocate memory
    pointVar = new int;
    pointFloat = new float;

    // Assigning value to the memory
    *pointVar = 45;
    *pointInt = 45.45f;

    // Print the value stored in memory
    cout << "*pointInt is: " << *pointInt << endl; // Output: 45
    cout << "*pointFloat is: " << *pointFloat << endl; // Output: 45.45

    // Deallocate the memory
    delete pointInt;
    delete pointFloat;


    /*
    SECOND EXAMPLE
    Includes the second example from the fifth diapositive
    */
    cout << ">>> SECOND EXAMPLE" << endl;

    // Declaring variable
    int num;

    // Asking user information
    cout << "Enter total number of students: ";
    cin >> num;
    
    // Declaring float pointer
    float* ptr;

    // Memory allocation of num number of floats
    ptr = new float(num);

    // Adding information to all the students
    cout << "\nEnter GPA of students" << endl;
    // desde i=0 mientras sea menor al total de estudiantes ingresados 
    for (int i=0; i < num; ++i) {
        // Almacene el valor agregado en la posicion dada por i
        cout << "Students" << i+1 << ": " << *(ptr + i) << endl;
        cin >> *(ptr + i);
    }

    // Displaying information
    cout << "\nDisplaying GPA of students:" << endl;
    for (int i=0; i < num; ++i) {
        // 
        cout << "Students" << i+1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    detele[] ptr;


    /*
    THIRD EXAMPLE
    Includes the third example from the fifth diapositive
    */
    cout << ">>> THIRD EXAMPLE" << endl;

    // Dynamucally declare Student object
    Student* ptr2 = new Student;

    // Call getAge() function
    ptr2->getAge();

    // ptr memory is realeased
    delete ptr2;


    return 0;
}