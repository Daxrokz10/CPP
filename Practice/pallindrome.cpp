#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int num) {
        if (num < 0) return false; // Negative numbers are not palindromes

        int temp = num;
        long long reversedNum = 0;

        while (temp != 0) {
            int digit = temp % 10;
            reversedNum = reversedNum * 10 + digit;
            temp /= 10;
        }

        return reversedNum == num;
    }
};