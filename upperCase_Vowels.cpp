#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    char vowels[] = "AEIOUaeiou";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (ch == vowels[i]) {
            return true;
        }
    }
    return false;
}

bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

bool isLowercase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isSpecialCharacter(char ch) {
    return !(isUppercase(ch) || isLowercase(ch) || isDigit(ch) || ch == ' ');
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, specialCharacters = 0, digits = 0, words = 0;

    int i = 0;
    while (i < str.length()) {
        char ch = str[i];

        // Count uppercase, lowercase, vowels, and consonants
        if (isUppercase(ch)) {
            uppercase++;
            if (isVowel(ch)) vowels++;
            else consonants++;
        } else if (isLowercase(ch)) {
            lowercase++;
            if (isVowel(ch)) vowels++;
            else consonants++;
        }

        // Count digits
        if (isDigit(ch)) {
            digits++;
        }

        // Count special characters
        if (isSpecialCharacter(ch)) {
            specialCharacters++;
        }

        i++;
    }

    // Count words
    for (int j = 0; j < str.length(); j++) {
        if ((j == 0 || str[j - 1] == ' ') && str[j] != ' ') {
            words++;
        }
    }

    // Output the results
    cout << "Total number of vowels: " << vowels << endl;
    cout << "Total number of consonants: " << consonants << endl;
    cout << "Total number of uppercase letters: " << uppercase << endl;
    cout << "Total number of lowercase letters: " << lowercase << endl;
    cout << "Total number of digits: " << digits << endl;
    cout << "Total number of special characters: " << specialCharacters << endl;
    cout << "Total number of words: " << words << endl;

    return 0;
}

