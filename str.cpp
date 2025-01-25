#include <iostream>
using namespace std;
int main() {
    char input[100]; // Array to store the input string
    int count[256] = {0}; // Array to store the frequency of each character (ASCII range)

    cout << "Input a string: ";
    cin >> input; // Read a string (stops at whitespace)

    // to count the frequency of each character
    for (int i = 0; input[i] != '\0'; i++) {
        count[(int)input[i]]++;
    }
    cout << "The count of each character "" << input << is:" << endl;
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            cout << (char)i << "\t" << count[i] << endl;
        }
    }
    return 0;
}
