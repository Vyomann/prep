#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(64+j)<<" "; // ASCII value of A is 65, so we use 64+j to get the correct letter
        }
        cout<<endl;
    }
    return 0;
}