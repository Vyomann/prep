#include <iostream>
using namespace std;

int main(){
    int n,i,j,num=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            if(num==1){
                num=0;
            }
            else{
                num=1;
            }
        }
        cout<<endl;
    }
    return 0;
}