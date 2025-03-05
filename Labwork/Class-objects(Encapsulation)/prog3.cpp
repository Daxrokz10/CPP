#include <iostream>
using namespace std;

class Student {
    private:
        static int rollno;
        static string name;

    public:
        static void setStdDetails() {
            cout << "Enter the roll no for student: ";
            cin >> rollno;
            cout << "Enter the name for student: ";
            cin >> name;
        }

        void getStdDetails() const {
            cout << "Roll no for student: " << rollno << endl;
            cout << "Name for student: " << name << endl;
        }
};

// Define static members
int Student::rollno;
string Student::name;

int main() {
    // Set details using static method
    Student::setStdDetails();

    // Create an instance to get details
    Student student; // Object of Student class
    student.getStdDetails(); // Calling method on the object

    return 0;
}