 #include <iostream>
using namespace std;

int main() {
    int size1, size2;

    // Input size and elements of the first array
    cout << "Input the number of elements to be stored in the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Input " << size1 << " elements in the array:\n";
    for (int i = 0; i < size1; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    cout << "Input the number of elements to be stored in the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Input " << size2 << " elements in the array:\n";
    for (int i = 0; i < size2; i++) {
        cout << "element - " << i << " : ";
        cin >> arr2[i];
    }

    // Merge the two arrays
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Sort the merged array in descending order
    for (int i = 0; i < mergedSize - 1; i++) {
        for (int j = i + 1; j < mergedSize; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    // Print the merged array
    cout << "The merged array in descending order is:\n";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Count the frequency of duplicate numbers
    int duplicateCount = 0;
    for (int i = 0; i < mergedSize - 1; i++) {
        if (mergedArray[i] == mergedArray[i + 1]) {
            duplicateCount++;
        }
    }

    // Print the count of duplicate numbers
    cout << "Total number of duplicate elements found in the array is: " << duplicateCount << endl;

    return 0;
} 
