#include <iostream>
using namespace std;

int main(){
    int y=0;
    cout<<"Enter the year = ";
    cin>>y;
    if(y%4==0){
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}