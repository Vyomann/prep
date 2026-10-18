#include <iostream>
using namespace std;

int main(){
    int n;
    int f = 1;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>=0){
        for(int i=1; i<=n; ++i){
            f *= i;
        }
        cout<<"factorial of "<< n << " = " << f << endl;
    }
    else{
        cout<<"Undefined number";
    }
    return 0;
}
// tc:O(n) bcoz loop execute n times for +ve n || sc:O(1)  bcoz used constant no. of variables