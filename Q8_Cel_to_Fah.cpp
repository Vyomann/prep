#include <iostream>
using namespace std;

int main() {
    int C=0, F=0;
    cout << "Enter the temperature in Celsius: ";
    cin >> C;
    cout << "The temperature in Fahrenheit is: " << ((9.0/5.0)*C+32) << endl;
    return 0;
}