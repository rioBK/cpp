#include <iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		student(string name="unknown"){
			this->name=name;
		}
		void printName(){
			cout<<"Student name: "<<name;
		}
};
int main(){
	student s1;
	s1.printName();
	cout<<endl;
	student s2("barath");
	s2.printName();
    return 0;	
}
