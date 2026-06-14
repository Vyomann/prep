#include <iostream>
using namespace std;

int main(){
    int n, fdigit, ldigit;
    cout << "Enter the number : ";
    cin >> n;
    
    if(n < 0) n = -1 * n;  //  convert negative to positive

    ldigit = n % 10;

    fdigit = n;
    while(fdigit >= 10){
        fdigit = fdigit / 10;
    }

    cout << "First digit : " << fdigit << endl;
    cout << "Last digit : "  << ldigit << endl;

    return 0;
}