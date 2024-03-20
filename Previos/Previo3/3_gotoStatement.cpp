#include <iostream>
using namespace std;

int main() {
    // Initializing variables
    float num, average, sum = 0.0;

    // Declaring variables
    int i, n;

    // First user interaction
    cout << "Maximum number of inputs: ";
    cin >> n;

    for (i=1; i <= n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if (num < 0.0) {
            // COntrol de program - move to jump
            goto jump;
        }

        sum += num;
    }

    jump:
        average = sum / (i-1);
        cout << "\nAverage = " << average << endl;
        return 0;
}