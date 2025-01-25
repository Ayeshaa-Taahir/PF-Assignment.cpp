#include <iostream>
using namespace std;
// global array 
int numbers[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
// function to check if a number is prime
bool Prime(int num) {
    if (num <= 1) {
        return false; // numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // if divisible by any number other than 1 and itself
        }
    }
    return true;
}
// function to calculate the sum of prime numbers
int sumOfPrimes() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (Prime(numbers[i])) {
            sum += numbers[i];
        }
    }
    return sum;
}
int main() {
    int primeSum = sumOfPrimes();
    cout << "The sum of prime numbers " << primeSum << endl;
    return 0;
}
