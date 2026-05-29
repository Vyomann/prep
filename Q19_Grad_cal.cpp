#include <iostream>
using namespace std;

int main(){
	int m=0;
	cout<<"Enter the marks = "<<endl;
	cin>>m;
	if(m>90 && m<=100){
		cout<<"Grade A";
	}
	else if(m>80 && m<=89){
		cout<<"Grade B";
	}
	else if(m>70 && m<=79){
		cout<<"Grade C";
	}
	else if(m>60 && m<=69){
		cout<<"Grade D";
	}
	else if(m>40 && m<=59){
		cout<<"Grade E";
	}
	else{
		cout<<"Grade F";
	}
}