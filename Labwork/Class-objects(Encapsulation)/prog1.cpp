#include<iostream>
using namespace std;


class Emp{
    private: 
        int salary;
    
    public:
        void setSalary(int fulltime,int overtime){
            this->salary = fulltime+overtime;
        }    
        int getSalary(){ 
            return salary;
        }
    
};
int main()
{
    Emp employee;
    employee.setSalary(5000, 200);
    cout << "Employee Salary: " << employee.getSalary() << endl;
    
    return 0;
}