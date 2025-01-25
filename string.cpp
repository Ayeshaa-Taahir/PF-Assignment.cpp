#include <iostream>
using namespace std;
// Function to find the length of a string
int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
// Function to compare two strings
bool compareStrings(const char str1[], const char str2[]) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    if (len1 != len2) {
        return false; // Strings are not of the same length
    }

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return false; // Characters at corresponding positions do not match
        }
    }
    return true; // Strings are identical
}
// Function to reverse and print a string
void reverseString(const char str[]) {
    int len = stringLength(str);
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    char initializedString[] = "Hello";
    // Input string
    char inputString[100];
    cout << "Enter a string: ";
    cin.getline(inputString, 100);

    // Compareing the strings
    if (compareStrings(initializedString, inputString)) {
        cout << "The strings are similar." << endl;
    } else {
        cout << "The strings are not similar." << endl;
    }
    // TO Print the strings in reverse
    cout << "Initialized string in reverse: ";
    reverseString(initializedString);
    cout << "Input string in reverse: ";
    reverseString(inputString);

    return 0;
}
