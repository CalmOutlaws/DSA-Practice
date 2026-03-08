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

void addStudent() {
    Student s;

    cout << "\nEnter student name: ";
    cin.ignore();
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks for 3 subjects: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }

    s.calculatePercentage();
    s.calculateGrade();

    students.push_back(s);
    cout << "\nStudent added successfully!" << endl;
    cout << "Percentage: " << fixed << setprecision(2) << s.percentage << "%" << endl;
    cout << "Grade: " << s.grade << endl;
}

void displayALLStudents() {
    if(students.empty()) {
        cout << "\nNo students in system!" << endl;
        return;
    }

    cout << "\n========== All Students ==========" << endl;
    cout << left << setw(15) << "Name"
         << setw(10) << "Roll No"
         << setw(12) << "Percentage"
         << setw(8) << "Grade" << endl;
    cout << string(45, '-') << endl;

    for (Student s : students) {
        cout << left << setw(15) << s.name
             << setw(10) << s.rollNo
             << setw(12) << fixed << setprecision(2) << s.percentage
             << setw(8) << s.grade << endl;
    }
}

void findTopper() {
    if (students.empty()) {
        cout << "\nNo students in system!" << endl;
        return;
    }

    Student topper = students[0];
    for (Student s : students) {
        if (s.percentage > topper.percentage) {
            topper = s;
        }
    }

    cout << "\n===== TOPPER =====" << endl;
    cout << "Name: " << topper.name << endl;
    cout << "Roll No: " << topper.rollNo << endl;
    cout << "Percentage: " << fixed << setprecision(2) << topper.percentage << "%" << endl;
    cout << "Grade: " << topper.grade << endl;
}

void saveToFile() {
    ofstream file("students.txt");

    if(!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    for (Student s : students) {
        file << s.name << endl;
        file << s.rollNo << endl;
        file << s.marks[0] << " " << s.marks[1] << " " << s.marks[2] << endl;
    }

    file.close();
    cout << "\nData saved to students.txt!" << endl;
}

void loadFromFile() {
    ifstream file("students.txt");

    if(!file) {
        cout << "No saved data found!" <<  endl;
        return;
    }

    students.clear();

    Student s;
    while (getline(file, s.name)) {
        file >> s.rollNo;
        file >> s.marks[0] >> s.marks[1] >> s.marks[2];
        file.ignore();

        s.calculatePercentage();
        s.calculateGrade();

        students.push_back(s);
    }

    file.close();
    cout << "\nData loaded successfully! " << students.size() << " students loaded." << endl;
}

int main() {
    int choice;

    while(true) {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayALLStudents();
                break;
            case 3:
                findTopper();
                break;
            case 4:
                saveToFile();
                break;
            case 5:
                loadFromFile();
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