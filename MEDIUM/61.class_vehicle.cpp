#include <iostream>
#include <string>
using namespace std;

// Base class - Vehicle
class Vehicle {
protected:
    float mileage;
    float price;

public:
    Vehicle(float m, float p) : mileage(m), price(p) {}
};

// Subclasses of Vehicle - Car and Bike
class Car : public Vehicle {
protected:
    float ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;

public:
    Car(float m, float p, float cost, int years, int seats, string fuel)
        : Vehicle(m, p), ownershipCost(cost), warranty(years), seatingCapacity(seats), fuelType(fuel) {}
};

class Bike : public Vehicle {
protected:
    int numCylinders;
    int numGears;
    string coolingType;
    string wheelType;
    float fuelTankSize;

public:
    Bike(float m, float p, int cylinders, int gears, string cooling, string wheel, float tankSize)
        : Vehicle(m, p), numCylinders(cylinders), numGears(gears), coolingType(cooling), wheelType(wheel), fuelTankSize(tankSize) {}
};

// Subclasses of Car - Audi and Ford
class Audi : public Car {
private:
    string modelType;

public:
    Audi(float m, float p, float cost, int years, int seats, string fuel, string model)
        : Car(m, p, cost, years, seats, fuel), modelType(model) {
    }

    void displayInfo() {
        cout << "Audi Model Type: " << modelType << endl;
        cout << "Ownership Cost: " << ownershipCost << ", Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << ", Price: " << price << endl;
    }
};

class Ford : public Car {
private:
    string modelType;

public:
    Ford(float m, float p, float cost, int years, int seats, string fuel, string model)
        : Car(m, p, cost, years, seats, fuel), modelType(model) {
    }

    void displayInfo() {
        cout << "Ford Model Type: " << modelType << endl;
        cout << "Ownership Cost: " << ownershipCost << ", Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << ", Price: " << price << endl;
    }
};

// Subclasses of Bike - Bajaj and TVS
class Bajaj : public Bike {
private:
    string makeType;

public:
    Bajaj(float m, float p, int cylinders, int gears, string cooling, string wheel, float tankSize, string make)
        : Bike(m, p, cylinders, gears, cooling, wheel, tankSize), makeType(make) {}

    void displayInfo() {
        cout << "Bajaj Make Type: " << makeType << endl;
        cout << "Cylinders: " << numCylinders << ", Gears: " << numGears << endl;
        cout << "Cooling Type: " << coolingType << ", Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
        cout << "Mileage: " << mileage << ", Price: " << price << endl;
    }
};

class TVS : public Bike {
private:
    string makeType;

public:
    TVS(float m, float p, int cylinders, int gears, string cooling, string wheel, float tankSize, string make)
        : Bike(m, p, cylinders, gears, cooling, wheel, tankSize), makeType(make) {}

    void displayInfo() {
        cout << "TVS Make Type: " << makeType << endl;
        cout << "Cylinders: " << numCylinders << ", Gears: " << numGears << endl;
        cout << "Cooling Type: " << coolingType << ", Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
        cout << "Mileage: " << mileage << ", Price: " << price << endl;
    }
};

int main() {
    // Creating objects and displaying information
    Audi audi(20.5, 2500000, 1200000, 5, 5, "Petrol", "A6");
    Ford ford(18.9, 2000000, 1150000, 4, 5, "Diesel", "EcoSport");

    Bajaj bajaj(40.2, 150000, 2, 5, "Air", "
