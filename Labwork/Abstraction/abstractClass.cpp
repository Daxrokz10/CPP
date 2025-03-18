#include<iostream>
using namespace std;

class Abstract{
    public: 
    virtual void printMessage() = 0;
};
class Child : public Abstract{
    public: 
        void printMessage(){
            cout<<"Hello";
        }
};
int main()
{  
    Child c;
    c.printMessage(); 
    return 0;
}