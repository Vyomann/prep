#include <iostream>
using namespace std;

int main(){
    float si=0, p=0, r=0, t=0;
    cout<<"Enter the value of P = ";
    cin>>p;
    cout<<"Enter the value of R = ";
    cin>>r;
    cout<<"Enter the value of T = ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest = "<<si;
    return 0;    
}