#include<iostream>
#include<string>
using namespace std;
class Eb_Bill{
	private:
		string Cname;
		long pnumber;
		int units;
		float amount;
		
		double calc_amount( int units){
			if(units<50){
				amount+=0.0;
			}else if(units<=150){
				amount+=0.8*(units-50);
			}else if(units<=350){
				amount+=0.8*100+1.0*(units-150);
			}else{
				amount+=0.8*100+1.0*200+1.20*(units-350);
			}
		}
	
	public:
		void accept(){
			cout<<"Enter name: ";
			cin>>Cname;
			cout<<"Phone number: ";
			cin>>pnumber;
			cout<<"Enter units: ";
			cin>>units;
			
		}
		void display(){
			cout<<Cname<<endl;
			cout<<pnumber<<endl;
			cout<<units<<endl;
			cout<<"amount: "<<calc_amount(units)<<endl;
		}
		
};
int main(){
	Eb_Bill bill;
	bill.accept();
	bill.display();
}

/*
'Define a class Ele_Bill in C++ with the following descriptions: 
Private members: Cname of type character array Pnumber of type long No_of_units of type integer Amount of type float.
 Calc_Amount( ) This member function should calculate the amount as No_of_units*Cost. 
 Amount can be calculated according to the following conditions: No_of_units Cost First 50 units Free 
 Next 100 units 0.80 @ unit Next 200 units 1.00 @ unit  Remaining units 1.20 @ unit 
 Public members: * A function Accept( ) 
 which allows user to enter Cname, Pnumber, No_of_units and invoke function Calc_Amount(). *
  A function Display( ) to display the values of all the data members on the screen.*/
