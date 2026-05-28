#include <iostream>
using namespace std;

int main(){
    int a=0, b=0;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    if(a>b){
        cout<<"The larger number is : "<<a<<endl;
    }
    else if(b>a){
        cout<<"The larger number is : "<<b<<endl;
    }
    else{
        cout<<"Both numbers are equal."<<endl;
    }
    return 0;
}