#include<iostream>
using namespace std;

class Parent{
    public:
        int pid;
        string parent_name;

};
class Child:public Parent{
    public:
        int cid;
        string child_name;

        void setParent(){
            cout<<"Enter pid: ";
            cin>>pid;
            cout<<"Enter parent name: ";
            cin>>parent_name;
        };
        void setChild(){
            cout<<"Enter cid: ";
            cin>>cid;
            cout<<"Enter child name: ";
            cin>>child_name;
        };
        void getParent_Child(){
            cout<<"Parent id is: "<<pid<<endl;
            cout<<"Child id is: "<<cid<<endl;
            cout<<"Parent name is: "<<parent_name<<endl;
            cout<<"Child name is: "<<child_name<<endl;
        }
};

int main()
{
    
    return 0;
}