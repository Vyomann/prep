#include <iostream>
using namespace std;

int main() {
    long n = 0;
    int count = 0;
    cout << "Enter the number : ";
    cin >> n;
    if(n==0){
        count=1;
    }
    while (n != 0) {
        if(n < 0){
            n = -n;
        }
        else{
            n = n;
        }
        n = n / 10;
        count++;
    }
    cout << "The number of digits in the given number is : " << count << endl;    
    return 0;
}