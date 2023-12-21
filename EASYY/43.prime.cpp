#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void PrintPrime(int start,int end){
	cout<<"Prime between M and N is: ";
	for(int i=start;i<=end;++i){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
	
}
int main(){
	int M,N;
	cout<<"enter M :";
	cin>>M;
	cout<<"enter N :";
	cin>>N;
	PrintPrime(M,N);
	return 0;
}
