#include <iostream>

class Degree {
public:
    void getDegree() {
        std::cout << "I got a degree" << std::endl;
    }
};

class Undergraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am an Undergraduate" << std::endl;
    }
};

class Postgraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am a Postgraduate" << std::endl;
    }
};

int main() {
    Degree degreeObj;
    Undergraduate undergradObj;
    Postgraduate postgradObj;

    // Call the getDegree function for each object
    degreeObj.getDegree();
    undergradObj.getDegree();
    postgradObj.getDegree();

    return 0;
}

