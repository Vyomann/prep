#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter the number : ";
    cin>>n;
    int prod=1;
    while(n!=0){
        if(n<0){
            n=-n;
        }
        else if(n>0){
            n=n;
        }
        else{
            prod=0;
            break;
        }
        
        prod *= n%10;
        n = n/10;
    }
    cout<<"The prod of digits of the given number is : "<<prod<<endl;
    return 0;
}