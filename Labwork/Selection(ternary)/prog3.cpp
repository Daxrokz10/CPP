// Largest of 4 numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter number c: ";
    cin >> c;
    cout << "Enter number d: ";
    cin >> d;

    int max = a>b ? 
                    a>c ?  
                        a > d ? a : d  
                    : c>d ? c : d
              : b>c ?
                    b > d  ? b : d
                    : c>d ? c : d;

    cout << max << " is the largest number!" << endl;

    return 0;
}