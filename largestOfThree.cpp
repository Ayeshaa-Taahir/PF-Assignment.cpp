// 1. Find the largest of three numbers
#include <iostream>
using namespace std;
int main(){

    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "Largest number: " << a << endl;
    } else if (b > c) {
        cout << "Largest number: " << b << endl;
    } else {
        cout << "Largest number: " << c << endl;
    }
    return 0;
}
