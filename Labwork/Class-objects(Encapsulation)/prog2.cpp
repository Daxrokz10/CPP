#include <iostream>
#include <vector>
using namespace std;

class Student {
    private:
        int rollno;
        string name;

    public:
        void setStdDetails(int i) {
            cout << "Enter the roll no for student " << i << " : ";
            cin >> rollno;
            cout << "Enter the name for student " << i << " : ";
            cin >> name;
        }

        void getStdDetails(int i) {
            cout << "Roll no for student " << i << " : " << rollno << endl;
            cout << "Name for student " << i << " : " << name << endl;
        }
};

int main() {
    int size;
    cout << "Enter the number of students: ";
    cin >> size;

    vector<Student> students(size); // Vector of Student objects

    for (int i = 0; i < size; i++) {
        students[i].setStdDetails(i); // Accessing each Student object
    }

    for (int i = 0; i < size; i++) {
        students[i].getStdDetails(i); // Accessing each Student object
    }

    return 0;
}