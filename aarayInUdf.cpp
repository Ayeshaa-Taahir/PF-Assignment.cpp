#include<iostream>
using namespace std;
void table(){
	int arr[5];
	cout<<"enter five no to generate a table"<<endl;
	for(int i =0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"the tables are"<<endl;
	for(int i=0;i<5;i++){
	for(int j=1;j<=5;j++){
		cout<<arr[i]<<"x"<<j<<"="<<arr[i]*j;
	}	
	cout<<endl;
	}
}

int main(){
	int table();
	return 0;
}
