#include <iostream>
#include <vector>
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;

class Employee {
    public:
        int Emp_id;
        string Emp_name;
        string Emp_pos;

        void setEmployee() {
            cout << "Enter Emp id: ";
            cin >> Emp_id;
            cout << "Enter Emp name: ";
            cin >> Emp_name;
            cout << "Enter Emp position: ";
            cin >> Emp_pos;
        }
        void getEmployee() {
            cout << "Emp id: " << Emp_id << endl;
            cout << "Emp name: " << Emp_name << endl;
            cout << "Emp position: " << Emp_pos << endl;
        }
};

class Salary : public Employee {
    public:
        int HRA;
        int DA;
        int PF;
        int PT;
        int TA;
        int base_salary, gross_salary, net_salary;

        void setSalaryDetails() {
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

sql::Connection* connectToDatabase() {
    sql::Driver* driver = get_driver_instance();
    sql::Connection* conn = driver->connect("tcp://127.0.0.1:3306", "root", "9696");
    conn->setSchema("employee_db");
    cout << "Connected to MySQL database successfully!" << endl;
    return conn;
}

void addEmployeeToDatabase(sql::Connection* conn, Employee& emp, Salary& sal) {
    sql::PreparedStatement* pstmt = conn->prepareStatement(
        "INSERT INTO employees (Emp_id, Emp_name, Emp_pos, Base_salary, HRA, DA, PF, PT, TA, Gross_salary, Net_salary) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"
    );
    pstmt->setInt(1, emp.Emp_id);
    pstmt->setString(2, emp.Emp_name);
    pstmt->setString(3, emp.Emp_pos);
    pstmt->setInt(4, sal.base_salary);
    pstmt->setInt(5, sal.HRA);
    pstmt->setInt(6, sal.DA);
    pstmt->setInt(7, sal.PF);
    pstmt->setInt(8, sal.PT);
    pstmt->setInt(9, sal.TA);
    pstmt->setInt(10, sal.gross_salary);
    pstmt->setInt(11, sal.net_salary);

    pstmt->execute();
    cout << "Employee added to database successfully!" << endl;
    delete pstmt;
}

int main() {
    sql::Connection* conn = connectToDatabase();

    int choice;
    int emp_id;
    Employee emp;
    Salary sal;
    vector<Employee> employees;
    vector<Salary> salary;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employee Details\n";
        cout << "3. Change Employee Data\n";
        cout << "4. Remove Employee\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                emp.setEmployee();
                sal.setSalaryDetails();
                employees.push_back(emp);
                salary.push_back(sal);
                addEmployeeToDatabase(conn, emp, sal); // Add employee to MySQL database
                break;
            case 2:
                cout << "Enter Employee ID to change data: ";
                cin >> emp_id;
                for (int i = 0; i < employees.size(); i++) {
                    if(employees[i].Emp_id == emp_id){
                        cout << "\nEmployee " << i + 1 << " Details:\n";
                        employees[i].getEmployee();
                        salary[i].displaySalaryDetails();
                    }
                    
                }
                break;
            case 3:
                int choice_upd;
                cout << "Enter Employee ID to change data: ";
                cin >> emp_id;
                cout<<"Enter 1 to update General Data: "<<endl;
                cout<<"Enter 2 to update Salary Data "<<endl;
                cout<<"Enter your choice: "<<endl;;
                cin>>choice_upd;

                switch (choice_upd){
                    case 1:
                        for(int i = 0;i<employees.size();i++){
                            if(employees[i].Emp_id == emp_id){
                                cout << "Updating General details for Employee ID: " << emp_id << endl;
                                employees[i].setEmployee();
                            }
                        }
                        break;

                    case 2:
                        for (int i = 0; i < employees.size(); i++){
                            if (employees[i].Emp_id == emp_id) {
                                cout << "Updating salary details for Employee ID: " << emp_id << endl;
                                salary[i].setSalaryDetails();
                        }
                    }
                        break;
                    default:
                        cout<<"Invalid choice"<<endl;
                }
                
                break;
            
            case 4:
                cout << "WARNING: ALL DATA FOR THE EMPLOYEE WILL BE DELETED" << endl;
                cout << "Enter Employee ID for which data has to be deleted: ";
                cin >> emp_id;
                for (size_t i = 0; i < employees.size(); i++) {
                    if (employees[i].Emp_id == emp_id) {
                        cout << "Deleting data for Employee ID: " << emp_id << endl;
                        employees.erase(employees.begin() + i);
                        salary.erase(salary.begin() + i);
                        break;
                    }
                }
                break;
                
        }
    } while (choice != 5);

    delete conn; // Close MySQL connection
    return 0;
}