
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float grade1, grade2, grade3, average;

    cout << "Enter student full name: ";
    cin >> name;

    cout << "Enter three grades (0-20): ";
    cin >> grade1 >> grade2 >> grade3;

    if (grade1 < 0 || grade1 > 20 ||
        grade2 < 0 || grade2 > 20 ||
        grade3 < 0 || grade3 > 20) {
        cout << "Invalid grade!" << endl;
        return 1;
    }

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
