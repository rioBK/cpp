#include <iostream>
using namespace std;

class FloydTriangle {
private:
    int rows;

public:
    FloydTriangle(int r) : rows(r) {}

    void generateTriangle() {
        int count = 1;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << count++ % 2;
            }
            cout << endl;
        }
    }

    ~FloydTriangle() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    FloydTriangle floyd(rows);
    floyd.generateTriangle();

    return 0;
}
