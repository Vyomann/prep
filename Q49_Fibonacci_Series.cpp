#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s;
    int a=0;
    int b=1;
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        s =a+b;
        a=b; b=s;
    }
    return 0;
}