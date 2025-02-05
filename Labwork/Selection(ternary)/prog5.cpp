#include <iostream>
using namespace std;

struct Student {
    float sub1, sub2, sub3, sub4;
    float avg;
    char grade;
};

char calculateGrade(float avg) {
    return (avg >= 90) ? 'A' :
           (avg >= 80) ? 'B' :
           (avg >= 70) ? 'C' :
           (avg >= 60) ? 'D' : 'F';
}

int main() {
    int numStudents;
    cout<<"Enter Number of Students: ";
    cin>>numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for student " << i + 1 << ":\n";
        cout << "Subject 1: ";
        cin >> students[i].sub1;
        cout << "Subject 2: ";
        cin >> students[i].sub2;
        cout << "Subject 3: ";
        cin >> students[i].sub3;
        cout << "Subject 4: ";
        cin >> students[i].sub4;

        students[i].avg = (students[i].sub1 + students[i].sub2 + students[i].sub3 + students[i].sub4) / 4;
        students[i].grade = calculateGrade(students[i].avg);
    }

    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Average: " << students[i].avg << "\n";
        cout << "Grade: " << students[i].grade << "\n";
    }

    return 0;
}