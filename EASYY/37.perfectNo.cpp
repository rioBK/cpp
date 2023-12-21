#include<iostream>
using namespace std;
int main(){
	int sum=0,n,i;
	cout<<"ENter num: ";
	cin>>n;
	for(i=1;i<=n/2;i++){
		if (n%i==0){
			sum=sum+i;
		}
		
	}
	if(sum==n){
		cout<<"perfect number..";
	}else{
		cout<<"Not perfect number..";
	}
	return 0;
}
