#include<iostream>
using namespace std;
int num(int a,int b);
int main(){
	int a,b;
	cout<<"enter a no";
	cin >>a >>b;
	cout<<num(a,b);
	return 0;
}
int num (int a, int b){
    int addition;
	addition=a+b;
	return addition;
}
