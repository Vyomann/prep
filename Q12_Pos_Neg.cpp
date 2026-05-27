#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter the number = ";
    cin>>n;
    if(n>0){
        cout<<"Positive number";
    }
    else if(n<0){
        cout<<"Negative Number";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}