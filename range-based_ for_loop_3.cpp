#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numVector = { 1, 2, 4, 5, 6, 7, 8 };

    // Printing the array using traditional for loop.
    cout << "Elements of the vector using traditional for loop : ";
    for (auto i = numVector.begin(); i != numVector.end(); ++i) {
        cout << *i << " ";
    }

    cout << endl;

    // Printing the array using a range-based for loop.
    cout << "Elements of the vector using range-based for loop: ";
    for (int num : numVector) {
        cout << num << " ";
    }

    return 0;
}
