#include<iostream>
#include<algorithm>
using namespace std;
void zigzag(int arr[],int n){
	sort(arr,arr+n);
	for(int i=1;i<n-1;i+=2){
		swap(arr[i],arr[i+1]);
	}
	
}
int main(){
	cout<<"Enter n of array: ";
	cin>>n;
	cout<<"Enter the number "
}
