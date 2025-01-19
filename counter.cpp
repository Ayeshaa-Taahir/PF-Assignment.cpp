#include <iostream>
using namespace std;
int main() {
    int count = 2; 

    while (count <= 25) {
        if (count == 13||count == 16||count== 19) {
            count++;
            continue; 
        }
        if (count == 23) {
            break; 
        }
        cout << count << " ";
        count++;
    }
    return 0;
}

