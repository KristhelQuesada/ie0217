#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10

enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;

int main() {
    // Initializing variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Printing the addresses
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;

    return 0;
}