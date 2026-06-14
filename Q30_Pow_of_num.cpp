#include <iostream>
using namespace std;

int main() {
    int base, exp;
    long result = 1; // We start at 1. We use 'long long' just in case the final answer is a huge number.

    // 1. Ask the user for numbers
    cout << "Enter the base: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exp;

    // 2. The Loop
    // This loop runs 'exponent' number of times.
    for (int i = 1; i <= exp; i++) {
        result = result * base; 
    }

    // 3. Print the answer
    cout << "The result is: " << result << endl;
    return 0;
}