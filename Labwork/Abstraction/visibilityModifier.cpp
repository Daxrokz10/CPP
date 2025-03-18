#include<iostream>
using namespace std;

class A{
    protected:
     int x = 10;
};
class B : protected A{
    public:
        void printvalue(){
            cout<<x;
        };
};
int main()
{
    B b;
    b.printvalue();
    return 0;
}