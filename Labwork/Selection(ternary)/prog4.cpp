// Largest of 5 numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter number c: ";
    cin >> c;
    cout << "Enter number d: ";
    cin >> d;
    cout << "Enter number e: ";
    cin >> e;

    int max = a > b ? 
                (a > c ? 
                    (a > d ? 
                        (a > e ? a : e) 
                        : (d > e ? d : e)) 
                    : (c > d ? 
                        (c > e ? c : e) 
                        : (d > e ? d : e))) 
              : (b > c ? 
                    (b > d ? 
                        (b > e ? b : e) 
                        : (d > e ? d : e)) 
                    : (c > d ? 
                        (c > e ? c : e) 
                        : (d > e ? d : e)));

    cout << max << " is the largest number!" << endl;

    return 0;
}