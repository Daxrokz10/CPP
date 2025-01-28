#include <iostream>

int main(){
    double x;
    double y;
    std::cout << "Enter value of x: ";
    std::cin >> x;
    std::cout << "Enter value of y: ";
    std::cin >> y;
    double z = (x+10)/(3*y);
    std::cout << z;
    return 0;
}