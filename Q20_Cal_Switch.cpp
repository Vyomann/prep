#include <iostream>
using namespace std;

int main(){
    float a=0, b=0;
    char op;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the secomd number : ";
    cin>>b;
    cout<<"Enter the operator : ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"Addition of two numbers : "<<a+b;
            break;
        case '-':
            cout<<"Subtraction of two numbers : "<<a-b;
            break;
        case '*':
            cout<<"Multiplication of two numbers : "<<a*b;
            break;
        case '/':
            if(b!=0){
                cout<<"Division of two numbers : "<<a/b;
                break;
            }
            else{
                cout<<"Division by zero is not allowed";
                break;
            }
        default:
            cout<<"Invalid operator";
    }
}