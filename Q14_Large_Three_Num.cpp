#include <iostream>
using namespace std;

int main(){
    int a=0, b=0, c=0;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The larger number is : "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"The larger number is : "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"The larger number is : "<<c<<endl;
    }
    else{
        cout<<"All numbers are equal."<<endl;
    }
    return 0;
}