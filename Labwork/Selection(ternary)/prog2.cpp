// Largest of 3 numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter number c: ";
    cin >> c;

    // Using ternary operator to find the largest number
    int max = a>b ? 
                    a>c ? a : c 
                : b > c ? b : c;

    cout << max << " is the largest number!" << endl;

    return 0;
}