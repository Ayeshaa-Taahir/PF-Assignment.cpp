#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void closestToZero(int arr[], int n) {
    if (n < 2) {
        cout << " to find the closest sum to zero." << endl;
        return;
    }
    int closestSum = numeric_limits<int>::max(); // initialize with a large value
    int num1 = 0, num2 = 0; // to store the pair of numbers

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int currentSum = arr[i] + arr[j];
            if (abs(currentSum) < abs(closestSum)) {
                closestSum = currentSum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    cout << "The two elements whose sum is closest to zero are: " 
         << num1 << " and " << num2 << endl;
    cout << "Their sum is: " << closestSum << endl;
}

int main() {
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr) / sizeof(arr[0]);

    closestToZero(arr, n);

    return 0;
}

