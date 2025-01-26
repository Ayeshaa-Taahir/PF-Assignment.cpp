#include <iostream>
#include <string>
using namespace std;

// Structure to hold student information
struct Student {
    int studentID;
    string studentName;
    float studentGPA;
    int marks[7];
};

// Global structure variable for one student
Student student1 = {101, "Alice", 3.8, {85, 90, 88, 92, 86, 89, 91}};

// User-defined function to print student data
void printStudentData(Student s1, Student s2) {
    cout << "Student 1 Information:" << endl;
    cout << "ID: " << s1.studentID << endl;
    cout << "Name: " << s1.studentName << endl;
    cout << "GPA: " << s1.studentGPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << s1.marks[i] << " ";
    }
    cout << endl << endl;

    cout << "Student 2 Information:" << endl;
    cout << "ID: " << s2.studentID << endl;
    cout << "Name: " << s2.studentName << endl;
    cout << "GPA: " << s2.studentGPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << s2.marks[i] << " ";
    }
    cout << endl;
}

int main() {
    // Local structure variable for another student
    Student student2 = {102, "Bob", 3.5, {78, 80, 75, 85, 82, 88, 90}};

    // Call the UDF to print the data of both students
    printStudentData(student1, student2);

    return 0;
}
