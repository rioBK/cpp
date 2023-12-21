#include<iostream>
using namespace std;

int count(string a) {
    int upper = 0, lower = 0, num = 0, sp = 0;
    int n = a.length();

    for (int i = 0; i < n; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            upper++;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            lower++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            num++;
        } else {
            sp++;
        }
    }

    cout << "Upper count: " << upper << endl;
    cout << "Lower count: " << lower << endl;
    cout << "Number count: " << num << endl;
    cout << "Special character count: " << sp << endl;

    return 0;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << count(s);

    return 0;
}

