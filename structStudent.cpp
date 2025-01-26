#include <iostream>
#include <string>
using namespace std;

// Structure to hold student information
struct Student {
    int studentID;
    string studentName;
    float studentGPA;
    float studentPercentage;
    int marks[5];
};

// User-defined function to input student details and calculate total marks
int inputAndCalculateTotal(Student &s) {
    // Taking input for the structure members
    cout << "Enter Student ID: ";
    cin >> s.studentID;

    cout << "Enter Student Name: ";
    cin.ignore(); // To ignore leftover newline character
    getline(cin, s.studentName);

    cout << "Enter Student GPA: ";
    cin >> s.studentGPA;

    cout << "Enter Student Percentage: ";
    cin >> s.studentPercentage;

    cout << "Enter 5 subject marks: ";
    int total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> s.marks[i];
        total += s.marks[i]; // Calculate total marks
    }

    return total; // Return the total marks
}

int main() {
    Student student; // Create a Student structure variable

    // Call the UDF to take input and calculate the total marks
    int totalMarks = inputAndCalculateTotal(student);

    // Print the total marks
    cout << "The total marks of " << student.studentName << " (ID: " << student.studentID << ") are: " << totalMarks << endl;

    return 0;
}
