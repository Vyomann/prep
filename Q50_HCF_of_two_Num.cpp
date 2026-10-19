#include <iostream> 
using namespace std;

int main(){
    int a;
    cout<<"Enter the number a: ";
    cin>>a;
    int b;
    cout<<"Enter the number b: ";
    cin>>b;
    int s=1;
    for(int i=1; i<a || i<b ; i++){
        if(a%i ==0 && b%i ==0){
            s=i;
        }
    }
    cout<<"HCF: "<<s;
    return 0;
}
// tc: O(min(a,b)) || as: O(1)