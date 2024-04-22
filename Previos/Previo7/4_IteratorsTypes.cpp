#include <iostream>
#include <forward_list> // used in first example
#include <list> // used in second example
#include <vector> // used in third example
using namespace std;

int main() {
    /* ---------------------------------------------
        FIRST EXAMPLE
    */
    cout << "FIRST EXAMPLE\n";

    // Initialize forward list
    forward_list<int> nums{1, 2, 3, 4};

    // Initialize an iterator to point
    // to beginning of a forward list
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        // access iterator value using indirection operator
        int original_value = *itr;

        // assign new value using indirection operator
        *itr = original_value * 2;

        // forward the iterator to next position
        itr++;
    }

    // display the contents of nums
    for (int num: nums) {
        cout << num << ", "; // displays 2, 4, 6, 8
    }
    cout << endl;


    /* ---------------------------------------------
        SECOND EXAMPLE
    */
    cout << "\nSECOND EXAMPLE\n";

    // initialize list
    list<int> nums2 {1, 2, 3, 4, 5};

    // initialize iterator to point to beginning of nums2
    list<int>::iterator itr2 = nums2.begin();

    // Display the elements in forward order
    cout << "Moving forward: " << endl;

    while (itr2 != nums2.end()) {
        cout << *itr2 << ", ";

        // Move iterator by 1 position forward
        itr2++;
    } // Displays 1, 2, 3, 4, 5

    cout << endl << "Moving backward: " << endl;

    // Display the elements in backward order
    while (itr2 != nums2.begin()) {
        if (itr2 != nums2.end()) {
            cout << *itr2 << ". ";
        }

        // move iterator by 1 position backward
        itr2--;
    } // Displays 5, 4, 3, 2, 1

    cout << *itr2 << endl;


    /* ---------------------------------------------
        THIRD EXAMPLE
    */
    cout << "\nTHIRD EXAMPLE\n";

    // create a vector
    vector<int> vec{1, 2, 3, 4};

    // create iterators to point to the first and the last elements
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1;

    // display the vector elements
    cout << "First element: " << *itr_first << endl; // 1
    cout << "Second element: " << itr_first[1] << endl; // 2

    cout << "Second last element: " << *(itr_last - 1) << endl; // 3
    cout << "Last element: " << *(itr_last) << endl; // 4


    return 0;
}