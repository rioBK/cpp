#include <iostream>
#include <cctype>  // for std::isalpha, std::tolower

using namespace std;

void countVowelsAndConsonants(const char* str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;

    while (*str) {
        char c = tolower(*str);

        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        str++;
    }
}

int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    // Input: Enter a string
    cout << "Input a string: ";
    cin.getline(input, MAX_SIZE);

    int vowelCount, consonantCount;

    // Count vowels and consonants using pointers
    countVowelsAndConsonants(input, vowelCount, consonantCount);

    // Output: Print the counts
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}

