# Student Grade Management System

A simple C++ console application to manage student grades and calculate performance metrics.

## Features

- Add students with marks in 3 subjects
- Automatic percentage and grade calculation
- Display all students in tabular format
- Find class topper
- Save data to file (persistent storage)
- Load data from file

## Grade System

- A: 90% and above
- B: 80-89%
- C: 70-79%
- D: 60-69%
- F: Below 60%

## How to Run
```bash
g++ student_management.cpp -o student_management
./student_management
```

## Menu Options

1. Add Student - Enter student details and marks
2. Display All Students - View all students in table format
3. Find Topper - Shows student with highest percentage
4. Save to File - Saves all data to students.txt
5. Load from File - Loads previously saved data
6. Exit - Quit the program

## Technical Details

- Language: C++
- Data Structure: Vector of Student structures
- File Handling: Text file (students.txt)
- No external dependencies

## Future Improvements

- Search student by roll number
- Edit student details
- Delete student
- Subject-wise analysis
- Multiple grade formats
```