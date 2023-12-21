#include<iostream>
using namespace std;
int Extra_Ele(int a[],int b[],int n)
{
	int result=0;
	for(int i=0;i<n;i++)
	{
	result=result^a[i];
	result=result^b[i];	
	}
	return result;

}
int main()
{
	int n=5;
	int arr[n]={1,2,3,4,5};
	int array[n]={2,3,4,5};
	cout<<"Extra Element: "<<Extra_Ele(arr,array,n);
	return 0;
}
