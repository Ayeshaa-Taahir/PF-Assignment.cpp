#include <iostream>
using namespace std ;

int main() {
  int i , j ;
  int min = 100000 ;
  int max = 0;
  int matrix[3][3] = {{ 1 , 0 , 0 },
                      { 0 , 1 , 0 },
                      { 40 , 0 , 1 }} ;
   bool isidentity  ;
      for (i = 0 ; i <= 2 ; i++) {
        for (j = 0 ; j <= 2 ; j++){
            if(min > matrix[i][j]){
                min = matrix[i][j] ;
            }
            else if(max < matrix[i][j]){
                max = matrix[i][j];
            }
            }
            if(i==j && matrix[i][j] == 1 && i!=j && matrix[i][j] == 0 ){
                    isidentity = false ;
            }else{
                    isidentity = true ;
            }
        }
        if(isidentity){
        cout << "The Matrix[3][3] is a identity matrix ! " << endl ;
        }
        else{
        cout << "The matrix is not an identity matrix ! " << endl ;
        }
        cout << "Minimum from the matrix : " << min << endl ;
        cout << "Maximum from the matrix : " << max ;

        return 0 ;
      }
