#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    while(n!=0){
        if(n<0){
            n=-n;
        }
        else{
            n=n;
        }
        sum += n%10;
        n = n/10;
    }
    cout<<"The sum of digits of the given number is : "<<sum<<endl;
    return 0;
}