#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 34, -40, 60, 70, 10};
    int n = 6; // Size of the array
    int minSum = 1000000; // A large initial value for the minimum sum
    int num1 = 0, num2 = 0; // Variables to store the closest pair

    cout << "The given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Nested loop to check all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            // Check if the current sum is closer to zero than the previous minimum
            if (sum >= 0 && sum < minSum) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            } else if (sum < 0 && -sum < minSum) {
                minSum = -sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    cout << "The pair of numbers whose sum is closest to zero are: ";
    cout << num1 << " and " << num2 << endl;

    return 0;
}
