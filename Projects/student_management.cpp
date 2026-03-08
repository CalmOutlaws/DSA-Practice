#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int marks[3]; // 3 subjects
    float percentage;
    char grade;

    void calculatePercentage() {
        int total = marks[0] + marks[1] + marks[2];
        percentage = (float)total / 3;
    }

    void calculateGrade() {
        if(percentage >= 90) grade = 'A';
        else if(percentage >= 80) grade = 'B';
        else if(percentage >= 70) grade = 'C';
        else if(percentage >= 60) grade = 'D';
        else grade = 'F';
    }
};

vector<Student> students;

void displayMenu() {
    cout << "\n===== Student Grade Management System =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display All Students" << endl;
    cout << "3. Find Toppper" << endl;
    cout << "4. Save to File" << endl;
    cout << "5. Load from File" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter choice: ";
}

int main() {
    int choice;

    while(true) {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                // Add student
                break;
            case 2:
                // Display all
                break;
            case 3:
                // Find topper
                break;
            case 4:
                // Save
                break;
            case 5:
                // Load
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}