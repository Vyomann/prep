#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter the number :";
    cin>>n;
    int rev=0;
    int digit=0;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<"The reverse of the given number is : "<<rev<<endl;
    return 0;
}