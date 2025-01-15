#include <iostream>
using namespace std;
int main() {
    int n, i, sum =0;
    
    cout<<"enter a value for nth term"<<endl;
    cin>>n;
    if(n<=0)
    cout<<"enter a positive no"<<endl;
    while( i <= n){
        int value;
        value = i*i;
        sum += value ;
        cout<<i<<"*"<<i<<"="<< value<<endl;
        i++;
    }
    cout<<"sum is "<< sum;
    return 0;
}