#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Input the no of elements to be stored in the array ";
    cin >> n;
    
    int Array[n],Arrayb [n],evenSum = 0;
    
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << "  ";
        cin >> Array[i];
        Arrayb[i] = Array[i]; 
        if (Array[i] % 2 == 0) {
            evenSum += Array[i];
        }
    }
    cout << "total element of array ";
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
    cout << "The sum of even numbers is = "<< evenSum << endl;
    return 0;
}

