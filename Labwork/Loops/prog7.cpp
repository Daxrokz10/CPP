//Q7 Sum of upto n natural numbers using for, while and do-while loops

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }

    cout << "Sum of up to " << n << " using for loop is " << sum << endl;

    int i = 1;
    sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of up to " << n << " using while loop is " << sum << endl;

    int j = 1;
    sum = 0;
    do {
        sum += j; 
        j++;
    } while (j <= n);

    cout << "Sum of up to " << n << " using do-while loop is " << sum << endl;

    return 0;
}