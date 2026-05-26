#include <iostream>
using namespace std;

int main(){
    int a=12, b=24, t=0;
    cout<<"Before Swapping : a = "<<a<<" and b = "<<b<<endl;
    // int t = 0;
    t = a;
    a = b;
    b = t;
    cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;
    return 0;
}