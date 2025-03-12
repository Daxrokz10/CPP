#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class EmployeeDetails {
    protected:
        int emp_id;
        string emp_name;
        string emp_pos;

    public:
        void setEmployeeDetails() {
            cout << "Enter Employee ID: ";
            cin >> emp_id;
            cout << "Enter Employee Name: ";
            cin.ignore(); // To ignore the newline character left in the buffer
            getline(cin, emp_name);
            cout << "Enter Employee Position: ";
            getline(cin, emp_pos);
        }

        void getEmployeeDetails() const {
            cout << "Employee ID: " << emp_id << endl;
            cout << "Employee Name: " << emp_name << endl;
            cout << "Employee Position: " << emp_pos << endl;
        }
};

class SalaryComponents {
    protected:
        double base_salary;
        double HRA;
        double PT;
        double PF;

    public:
        void setSalaryComponents() {
            cout << "Enter Base Salary: ";
            cin >> base_salary;
            cout << "Enter HRA: ";
            cin >> HRA;
            cout << "Enter PT: ";
            cin >> PT;
            cout << "Enter PF: ";
            cin >> PF;
        }

        void getSalaryComponents() const {
            cout << "Base Salary: " << fixed << setprecision(2) << base_salary << endl;
            cout << "HRA: " << fixed << setprecision(2) << HRA << endl;
            cout << "PT: " << fixed << setprecision(2) << PT << endl;
            cout << "PF: " << fixed << setprecision(2) << PF << endl;
        }
};

class SalaryCalculator : public EmployeeDetails, public SalaryComponents {
    public:
        double calculateGrossSalary() const {
            return base_salary + HRA;
        }

        double calculateNetSalary() const {
            return calculateGrossSalary() - PT - PF;
        }

        void displaySalaryDetails() const {
            getEmployeeDetails();
            getSalaryComponents();
            cout << "Gross Salary: " << fixed << setprecision(2) << calculateGrossSalary() << endl;
            cout << "Net Salary (In-hand): " << fixed << setprecision(2) << calculateNetSalary() << endl;
        }
};

int main() {
    int num_employees;
    cout << "Enter the number of employees: ";
    cin >> num_employees;

    vector<SalaryCalculator> employees(num_employees);

    for (int i = 0; i < num_employees; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        employees[i].setEmployeeDetails();
        employees[i].setSalaryComponents();
    }

    cout << "\nEmployee Salary Details:" << endl;
    for (int i = 0; i < num_employees; ++i) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].displaySalaryDetails();
    }

    return 0;
}