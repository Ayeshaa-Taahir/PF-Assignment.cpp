#include <iostream>
using namespace std;
int main(){
	int positive,negative,num;
	do{
		cout<<"enter an integer no ";
		cin>>num;
		if( num > 0){
		
		positive++;
		
	       }else{   
		negative++;
	}
		}while(num!=0);
		cout<<"total no of positive Integer "<<positive<<endl;
		cout<<"total no of negative Integer "<<negative<<endl;
	return 0;
}
