#include <iostream>
#include <string>

using namespace std;

class State {
protected:
    int tp;

public:
    State() {
        tp = 0;
    }

    void inctp() {
        tp++;
    }

    int gettp() {
        return tp;
    }
};

class District : public State {
private:
    string Dname;
    float Distance;
    long int Population;

public:
    void DINPUT() {
        cout << "Enter District Name: ";
        getline(cin, Dname);

        cout << "Enter Distance: ";
        cin >> Distance;

        cout << "Enter Population: ";
        cin >> Population;
        
        cin.ignore(); // Consume the newline character left in the input buffer
    }

    void DOUTPUT() {
        cout << "District Name: " << Dname << endl;
        cout << "Distance: " << Distance << " km" << endl;
        cout << "Population: " << Population << " people" << endl;
        cout << "State TP: " << gettp() << endl;
    }
};

int main() {
    District district;

    district.DINPUT(); // Input District details
    district.inctp();  // Increment tp from the base class

    cout << "\nDistrict Details:\n";
    district.DOUTPUT(); // Output District details

    return 0;
}

