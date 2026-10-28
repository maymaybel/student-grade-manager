#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float grade1, grade2, grade3, average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;

    average = (grade1 + grade2 + grade3) / 3;

    cout << "\nStudent: " << name << endl;
    cout << "Average: " << average << endl;

    if (average >= 10) {
        cout << "Status: Passed" << endl;
    } else {
        cout << "Status: Failed" << endl;
    }

    return 0;
}
