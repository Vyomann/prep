#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%2==0 && n%1==0 && n%n==0 && n!=2 && n!=1){
        cout<<n<<" is not prime number";
    }
    else{
        cout<<n<<" is prime number";
    }
    return 0;
}