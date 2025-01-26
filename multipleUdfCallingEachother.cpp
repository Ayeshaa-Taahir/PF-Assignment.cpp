#include <iostream>
#include <cmath> // For sqrt()
using namespace std;
double sum_of_square(double a, double b, double c); // declaration ofUDF 1
double squareroot(double value); //declaration of UDF 2
double sum(double a, double b, double c); //declaration of UDF 3
int main() {
    //to input three numbers from the user
    double a, b, c;
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;
    //to call UDF1 to compute the sum of square roots
    double result = sum_of_square(a, b, c);
    //to display the final result
    cout << "The product of the square roots of the numbers is: " << result << endl;
    return 0;
}
//UDF 1 Computes the sum of square roots and return the product
double sum_of_square(double a, double b, double c) {
    // Call UDF 2 to calculate square roots of a, b, and c
    double sqrt_a = squareroot(a);
    double sqrt_b = squareroot(b);
    double sqrt_c = squareroot(c);
    // Call UDF 3 to calculate the sum of the square roots
    double product = sum(sqrt_a, sqrt_b, sqrt_c);
    // Return the product of square roots to main()
    return product;
}
// UDF2 Calculates the square root of a number
double squareroot(double value) {
    // Calculate and return the square root
    return sqrt(value);
}
//UDF3 Computes the sum of square roots and returns the product
double sum(double a, double b, double c) {
    // Compute the sum of square roots
    double sum = a + b + c;
    cout << "The sum of square roots is: " << sum << endl;
    // Compute and return the product of square roots
    double product = a * b * c;
    return product;
}
