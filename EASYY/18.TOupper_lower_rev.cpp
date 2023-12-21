#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Use getline to read the entire line

    // Convert the string to upper case
    string a = str; // Make a copy
    transform(a.begin(), a.end(), a.begin(), ::toupper);

    // Convert the string to lower case
    string b = str; // Make a copy
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    // Find the reverse of the string
    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());

    // Print the results
    cout << "The string in upper case is: " << a << endl;
    cout << "The string in lower case is: " << b << endl;
    cout << "The reverse of the string is: " << reverse_str << endl;

    return 0;
}

