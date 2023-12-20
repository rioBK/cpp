/*'Write the code to implement the concept of inheritance for Vehicles. You are required to implement inheritance between classes. 
You have to write four classes in C++ i.e. one superclass, two sub classes and one driver class. Vehicle is the super class whereas Bus and 
Truck are sub classes of Vehicle class. Transport is a driver class which contains main method. Detailed description: Detailed description of
 Vehicle (Super class): The class Vehicle must have following attributes: 1.Vehicle model 2.Registration number 3.Vehicle speed (km/hour) 
 4.Fuel capacity (liters) 5.Fuel consumption (kiloM) The Vehicle class must have following methods: 1.Parameterized constructor that will
  initialize all the datamembers with the given values.  2.Getters and Setters for each data member that will get and setthe values of data
   members of class.  3.A method fuelNeeded() that will takedistance (in kilo meter) as an argument.It will calculate the amount of fuel 
   needed for the given distance and will return the value of fuel needed for given distance. You can use the attributes 'Fuel consumption'defined 
   within above Vehicle class to determine the fuel needed forthe given distance. You are required to implement this functionality by yourself. 4.
   A method distanceCovered() that willtake time (in hours) as an argument. It will calculate 
   the distance for the given time and speed and returns the value of distance.
    The formula to calculate speed is given as speed = distance/time. You can use this formula to calculate the distance. 5.A display() 
	method that will display all the information of a vehicle. Derive 2 classes Bus and Truck from Vehicle class'*/
	
Certainly! Below is the implementation of the described scenario with the classes `Vehicle`, `Bus`, `Truck`, and `Transport` (driver class):

```cpp
#include <iostream>
#include <string>

using namespace std;

// Vehicle class
class Vehicle {
protected:
    string model;
    string registrationNumber;
    double speed;  // in km/hour
    double fuelCapacity;  // in liters
    double fuelConsumption;  // in kiloM

public:
    // Parameterized constructor
    Vehicle(string mdl, string regNum, double spd, double fuelCap, double fuelCons)
        : model(mdl), registrationNumber(regNum), speed(spd), fuelCapacity(fuelCap), fuelConsumption(fuelCons) {}

    // Getters and Setters
    string getModel() const { return model; }
    void setModel(const string& mdl) { model = mdl; }

    string getRegistrationNumber() const { return registrationNumber; }
    void setRegistrationNumber(const string& regNum) { registrationNumber = regNum; }

    double getSpeed() const { return speed; }
    void setSpeed(double spd) { speed = spd; }

    double getFuelCapacity() const { return fuelCapacity; }
    void setFuelCapacity(double fuelCap) { fuelCapacity = fuelCap; }

    double getFuelConsumption() const { return fuelConsumption; }
    void setFuelConsumption(double fuelCons) { fuelConsumption = fuelCons; }

    // Method to calculate fuel needed for a given distance
    double fuelNeeded(double distance) const {
        return (distance / fuelConsumption);
    }

    // Method to calculate distance covered for a given time
    double distanceCovered(double time) const {
        return (speed * time);
    }

    // Display method
    void display() const {
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Speed: " << speed << " km/hour" << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuelConsumption << " kiloM/liter" << endl;
    }
};

// Bus class derived from Vehicle
class Bus : public Vehicle {
public:
    // Constructor
    Bus(string mdl, string regNum, double spd, double fuelCap, double fuelCons)
        : Vehicle(mdl, regNum, spd, fuelCap, fuelCons) {}
};

// Truck class derived from Vehicle
class Truck : public Vehicle {
public:
    // Constructor
    Truck(string mdl, string regNum, double spd, double fuelCap, double fuelCons)
        : Vehicle(mdl, regNum, spd, fuelCap, fuelCons) {}
};

// Transport class (driver class)
int main() {
    // Create instances of Bus and Truck
    Bus myBus("BusModel", "B123", 60.0, 150.0, 5.0);
    Truck myTruck("TruckModel", "T456", 80.0, 200.0, 8.0);

    // Display information for Bus
    cout << "Bus Information:\n";
    myBus.display();
    cout << endl;

    // Display information for Truck
    cout << "Truck Information:\n";
    myTruck.display();
    cout << endl;

    // Test fuelNeeded and distanceCovered methods
    double distance = 300.0;
    double time = 2.5;

    cout << "Fuel needed for distance (" << distance << " km) by Bus: " << myBus.fuelNeeded(distance) << " liters\n";
    cout << "Fuel needed for distance (" << distance << " km) by Truck: " << myTruck.fuelNeeded(distance) << " liters\n";

    cout << "Distance covered in " << time << " hours by Bus: " << myBus.distanceCovered(time) << " km\n";
    cout << "Distance covered in " << time << " hours by Truck: " << myTruck.distanceCovered(time) << " km\n";

    return 0;
}
```/*

Explanation:

1. The `Vehicle` class has attributes representing various properties of a vehicle and methods to calculate fuel needed and distance covered.

2. The `Bus` and `Truck` classes are derived from the `Vehicle` class, inheriting its attributes and methods.

3. The `Transport` class (main function) demonstrates the creation of instances of `Bus` and `Truck`, displays their information, and tests the `fuelNeeded` and `distanceCovered` methods.

4. Note that the `Bus` and `Truck` classes do not need to redefine the methods of the `Vehicle` class since they inherit them. They can directly use these methods.*/
