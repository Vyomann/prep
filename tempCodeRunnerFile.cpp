
#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cout << "Enter the number : ";
    cin >> n;

    // Upper Half
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)         cout << "*";              // left stars
        for(j = 1; j <= 2*(n-i); j++)   cout << " ";              // middle spaces
        for(j = 1; j <= i; j++)         cout << "*";              // right stars
        cout << endl;
    }

    // Lower Half
    for(i = n; i >= 1; i--){
        for(j = 1; j <= i; j++)         cout << "*";              // left stars
        for(j = 1; j <= 2*(n-i); j++)   cout << " ";              // middle spaces
        for(j = 1; j <= i; j++)         cout << "*";              // right stars
        cout << endl;
    }

    return 0;
}