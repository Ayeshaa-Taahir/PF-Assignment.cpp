#include <iostream>
using namespace std;

int main()
{
  int row1 , column1 ;
  cout << "Input Rows and Columns of first matrix : " << endl ;
  cin >> row1 >> column1 ;
  int row2 , column2 ;
  cout << "Input Rows and Columns of second matrix : " << endl ;
  cin >> row2 >> column2 ;
  int matrix_1[row1][column1] ;
  cout << "Input elements in the first matrix : " << endl ;
  for (int i = 0 ; i < row1 ; i++){
    for (int j = 0 ; j < column1 ; j++){
        cout << "element-[" << i << "][" << j << "] = " ;
        cin >> matrix_1[i][j] ;
    }
  }
  int matrix_2[row2][column2] ;
  cout << "Input elements in the second matrix : " << endl ;
  for (int i = 0 ; i < row2 ; i++){
    for (int j = 0 ; j < column2 ; j++){
        cout << "element-[" << i << "][" << j << "] = " ;
        cin >> matrix_2[i][j] ;
      }
  }
  cout << "First matrix : " << endl ;
  for (int i = 0 ; i < row1 ; i++){
    for (int j = 0 ; j < column1 ; j++){
        cout << matrix_1[i][j] ;
    }
    cout << endl ;
  }
  cout << "Second matrix : " << endl ;
  for (int i = 0 ; i < row2 ; i++){
    for (int j = 0 ; j < column2 ; j++){
        cout << matrix_2[i][j] ;
      }
      cout << endl ;
  }

// To Check if matrices can be compared (same dimensions)
    if (row1 == row2 && column1 == column2)
    {
        cout << "The matrices can be compared." << endl;

        // Check if matrices are equal
        bool areEqual = true;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                if (matrix_1[i][j] != matrix_2[i][j])
                {
                    areEqual = false;
                    break;
                }
            }
        }

        if (areEqual)
        {
            cout << "The matrices are equal." << endl;
        }
        else
        {
            cout << "The matrices are not equal." << endl;
        }

        // Perform addition of matrices
        int sumMatrix[row1][column1];
        cout << "Sum of the matrices: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                sumMatrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
                cout << sumMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The matrices cannot be compared or added because their dimensions are different." << endl;
    }

    return 0;
}
