#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    cout << "Enter a decimal number: ";
    cin >> num;
    originalNum = num;
    // to count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
    // to calculate the sum of digits raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10;         // to get the last digit
        result += pow(remainder, n);         // to add digit^n to the result
        originalNum /= 10;                   // to remove the last digit
    }
    //to check if the number is an Armstrong number
    if (result == num) {
        cout << num << " is an Armstrong number" << endl;
    } else {
        cout << num << " is not an Armstrong number" << endl;
    }
    return 0;
}
