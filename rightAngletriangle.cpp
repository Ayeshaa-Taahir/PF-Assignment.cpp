#include<iostream>
using namespace std;
int main(){
	int row ;
	cout <<"enter no of rows ";
	cin>>row;
	
	if(row <= 0){
		cout<<"enter a valid row no";
	}int i=1;
	while(i <= row ){
		int j =1;
		while( j <= i){
		
		cout<<i <<" ";
		j++;}
		cout<<endl;
		i++;
	}
	return 0;
}
