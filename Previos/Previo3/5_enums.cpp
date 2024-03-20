#include <iostream>
using namespace std;

// Definition of the enums
enum seasons {spring = 34, summer = 4, autumn = 9, winter = 32};
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() {
    // First Example
    seasons s;
    s = summer;
    cout << "Summer = " << s << endl;

    // Second Example
    // Today entonces es 3 porque como no se definieron valores en los enums
    // su numeracion parte de 0 y como Wednesday es la cuarta posicion enton-
    // ces equivale a 3. Se imprime 4 porque se le suma 1.
    week today;
    today = Wednesday;
    cout << "Day " << today+1 << endl;

    // Third Example
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;

    return 0;
}