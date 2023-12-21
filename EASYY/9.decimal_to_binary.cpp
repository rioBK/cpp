#include<iostream>
using namespace std;
int main(){
	int b,d;
	cout<<"ENter decimal number:";
	cin>>d;
	while(d>0){
		b=d%2;
		cout<<b;
		d=d/2;	
	}
}
