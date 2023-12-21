#include <iostream>
using namespace std;

// Mammals class
class Mammals {
public:
    void displayMammal() {
        cout << "I am a mammal." << endl;
    }
};

// MarineAnimals class
class MarineAnimals {
public:
    void displayMarineAnimal() {
        cout << "I am a marine animal." << endl;
    }
};

// BlueWhale class inherits from both Mammals and MarineAnimals
class BlueWhale : public Mammals, public MarineAnimals {
public:
    void displayBlueWhale() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
    }
};

int main() {
    Mammals mammalObj;
    MarineAnimals marineAnimalObj;
    BlueWhale blueWhaleObj;

    // Calling functions using different objects
    cout << "Calling function of Mammals using Mammals object:" << endl;
    mammalObj.displayMammal();

    cout << "\nCalling function of MarineAnimals using MarineAnimals object:" << endl;
    marineAnimalObj.displayMarineAnimal();

    cout << "\nCalling function of BlueWhale using BlueWhale object:" << endl;
    blueWhaleObj.displayBlueWhale();

    cout << "\nCalling function of Mammals using BlueWhale object:" << endl;
    blueWhaleObj.Mammals::displayMammal();

    cout << "\nCalling function of MarineAnimals using BlueWhale object:" << endl;
    blueWhaleObj.MarineAnimals::displayMarineAnimal();

    return 0;
}
