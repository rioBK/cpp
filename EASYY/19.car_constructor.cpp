#include <iostream>
#include <string>
using namespace std;
class car{
	public:
		string Brand;
		car():Brand("Ford"){}
		string getBrand(){
			return Brand;
		}
};
int main(){
	car c;
	string carName=c.getBrand();
	cout<<carName;
	
}







/*'Write a constructor in the Car class given below that initializes the brand class field with the string "Ford". 
Call the getBrand() method in the main method of the Sample class  and store the value of the brand in a variable, 
and print the value. class Car { String brand; //your constructor here public String getBrand() { return brand; } } */
