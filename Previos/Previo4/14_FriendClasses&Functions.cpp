#include <iostream>
using namespace std;

class MyClass {
    private:
        int member1;
};

// Example 1
class Distance {
    private:
        int meter;

        // friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0){}
};

int addFive(Distance d) {
    // accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}


// Example 2
class ClassB;

class ClassA {
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}

    private:
        int numA;

        // friend function declaration
        friend int add(ClassA, ClassB);
};

class ClassB {
    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

    private:
        int numB;
        
        // friend function declaration
        friend int add(ClassA, ClassB);
};

int add (ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}



// Funcion Main
int main() {
    MyClass obj;

    //Error! Cannot access private members from here
    //if a run
    // obj.member1 = 5;


    // Example 1
    cout << ">>> EXAMPLE 1: " << endl;
    Distance D;
    cout << "Distance: " << addFive(D) << endl;


    // Example 2
    cout << ">>> EXAMPLE 2: " << endl;
    ClassA objectA;
    ClassB objectB;

    cout << "Sum: " << add(objectA, objectB) << endl;

    return 0;
}