#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& paragraph) {
    istringstream iss(paragraph);
    int wordCount = 0;
    string word;

    while (iss >> word) {
        ++wordCount;
    }

    return wordCount;
}

int main() {
    string paragraph = "Machine learning (ML) is a kind of AI (artificial intelligence) "
                        "that lets software applications become more precise at anticipating "
                        "results without being specifically programmed to do so. "
                        "Machine learning algorithms utilize historical data as input to anticipate/predict "
                        "the latest output values.";

    int wordCount = countWords(paragraph);

    cout << "No. of words = " << wordCount << endl;

    return 0;
}
/*program, iss is an instance of istringstream that is used to extract words from the paragraph string as if it were a stream of input. The iss object allows you to treat a string as if it were an input stream, making it easy to extract individual words using the >> operator.*/
