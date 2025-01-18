#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of row";
    cin>>n;
    if (n <= 0) {
        cout << " enter a positive integer " << endl;
        return 1;
    }
    int i = n; 
    do {
        int j = i;
        do {
            cout << j << " ";  
            j--;
        } while (j >= 1);
        cout << endl; 
        i--; 
    } while (i >= 1);

    return 0 ;
}

