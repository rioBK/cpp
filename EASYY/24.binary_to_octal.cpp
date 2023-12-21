#include<iostream>
using namespace std;
class con{
	private:
	int binaryNo,OctalNo;
	public:
		con(){
			binaryNo=0;
			OctalNo=0;
	   	}
	   	
		void octal(){
		int r,a=0,j=1,b;
		cout<<"ENter binary no: ";
		cin>>b;
		binaryNo=b;
		while(b!=0){
			r=b%10;
			a=a+(r*j);
			j=j*2;
			b=b/10;
		}
		OctalNo=a;
     	}
  	
		void display(){
			cout<<"Octal number is ";
			cout<<oct<<OctalNo;
		}

	
};
int main(){
	con c;
	c.octal();
	c.display();
	return 0;
}
