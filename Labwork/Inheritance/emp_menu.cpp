#include<iostream>
#include<vector>
using namespace std;

class EmpDetails{
    public:
        string EmpName;
        string EmpId;
        string EmpPos;
    
        void setEmpDetails(){
            cout << "Enter Employee Name: ";
            cin >> EmpName;
            cout << "Enter Employee ID: ";
            cin >> EmpId;
            cout << "Enter Employee Position: ";
            cin >> EmpPos;
        }

        void displayEmpDetails() {
            cout << "Employee Name: " << EmpName << endl;
            cout << "Employee ID: " << EmpId << endl;
            cout << "Employee Position: " << EmpPos << endl;
        }
};

class SalaryDetails{
    public:
        int HRA;
        int DA;
        int PF;
        int PT;
        int TA;
        int base_salary, gross_salary, net_salary;

        void setSalaryDetails(){
            cout << "Enter Base Salary: ";
            cin >> base_salary;
            HRA = base_salary * 0.1;
            DA = base_salary * 0.08;
            PF = base_salary * 0.1;
            PT = 200;
            TA = base_salary * 0.05;
            
            calculateSalaries();
        }

        void calculateSalaries() {
            gross_salary = base_salary + HRA + DA + TA;
            net_salary = gross_salary - (PF + PT);
        }

        void displaySalaryDetails() {
            cout << "HRA: " << HRA << endl;
            cout << "TA: " << TA << endl;
            cout << "DA: " << DA << endl;
            cout << "PF: " << PF << endl;
            cout << "PT: " << PT << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Net Salary: " << net_salary << endl;
        }
};

int main()
{
    vector<EmpDetails> employees;
    vector<SalaryDetails> salaries;
    int choice, empIndex;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employee Details\n";
        cout << "3. Change Salary Values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                EmpDetails emp;
                SalaryDetails sal;
                emp.setEmpDetails();
                sal.setSalaryDetails();
                employees.push_back(emp);
                salaries.push_back(sal);
                break;
            }
            case 2:
                cout << "Enter Employee Index: ";
                cin >> empIndex;
                if(empIndex >= 0 && empIndex < employees.size()) {
                    employees[empIndex].displayEmpDetails();
                    salaries[empIndex].displaySalaryDetails();
                } else {
                    cout << "Invalid Employee Index.\n";
                }
                break;
            case 3:
                cout << "Enter Employee Index: ";
                cin >> empIndex;
                if(empIndex >= 0 && empIndex < employees.size()) {
                    salaries[empIndex].setSalaryDetails();
                } else {
                    cout << "Invalid Employee Index.\n";
                }
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);

    return 0;
}