#include <iostream>
using namespace std;

// Function 1: multiplication table of an integer
void solve(int num) {
    cout << "Multiplication table of " << num  endl;
    for (int i = 1; i <= 10; ++i) {
    cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Function 2: compute the sum of the squares of three float values
void solve(float a, float b, float c) {
    float result = a * a + b * b + c * c;
    cout << "Sum of squares of " << a << ", " << b << ", and " << c << " is: " << result << endl;
}

// Function 3: compute and return the average of four integer values
float solve(int a, int b, int c, int d) {
    float average = (a + b + c + d) / 4.0; // Division by 4.0 ensures floating-point division
    return average;
}

// Function 4: solve the part (2) using function template
template <typename T>
void solve(T a, T b, T c) {
    T result = a * a + b * b + c * c;
    cout << "Sum of squares of " << a << ", " << b << ", and " << c << " is: " << result << endl;
}

int main() {
    // Part 1: Drawing the multiplication table
    int num = 5;
    solve(num);

    // Part 2: Sum of squares of three float values
    solve(2.5f, 3.5f, 1.5f);

    // Part 3: Compute average of four integers
    int a = 10, b = 20, c = 30, d = 40;
    float avg = solve(a, b, c, d);
    cout << "Average of " << a << ", " << b << ", " << c << ", and " << d << " is: " << avg << endl;

    // Part 4: Using the template for sum of squares
    solve(1, 2, 3);         // Using integers
    solve(1.2, 3.4, 5.6); // Using floats

    return 0;
}
