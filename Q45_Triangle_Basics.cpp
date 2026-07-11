#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        int m=1;
        for(j=1;j<=i;j++){
            cout<<m<<" ";
            m=m*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}