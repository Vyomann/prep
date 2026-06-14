#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the square: ";
    cin >> size;

    for (int row = 1; row <= size; row++) {
        
        for (int col = 1; col <= size; col++) {
            cout << "* "; // Print a star and a space
        }
        
        cout << endl; 
    }

    return 0;
}