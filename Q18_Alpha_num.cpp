#include <iostream>
using namespace std;

int main(){
    char c=0;
    cout<<"Enter a character = ";
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
		cout<<"Alphabet"<<endl;
	}
	else if(c>='0' && c<='9'){
		cout<<"Number"<<endl;
	}
	else{
		cout<<"Special Character";
	}
}