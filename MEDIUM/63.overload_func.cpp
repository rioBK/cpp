#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overloading == operator
    bool operator==(const String& other) const {
        return (strcmp(str, other.str) == 0);
    }
};

int main() {
    // Creating String objects
    String s1("Apple");
    String s2("Orange");

    // Comparing strings using ==
    if (s1 == s2) {
        std::cout << "Both are equal" << std::endl;
    } else {
        std::cout << "Both not equal" << std::endl;
    }

    return 0;
}
