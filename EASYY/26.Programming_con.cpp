#include <iostream>
#include <string>

class Programming {
public:
    // Constructor with default parameter
    Programming(const std::string& language = "programming languages") {
        std::cout << "I love " << language << std::endl;
    }
};

int main() {
    // Creating objects with and without parameters
    Programming defaultObject;      // Prints "I love programming languages"
    Programming customObject("cpp"); // Prints "I love cpp"

    return 0;
}

