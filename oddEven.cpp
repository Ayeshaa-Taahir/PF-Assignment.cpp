#include <iostream>
using namespace std;
int main() {
   int i,no1,no2,product=1;
   cout <<"enter a starting no ";
      cin>>no1;
   cout<<"enter a ending no ";
   cin>>no2;
   for(i=no1;i<=no2;i++){
       if(i%2==0){
           cout<<i<<" is even"<<endl;
       }else
       {
           product=product*i;
       }
       
   }
   cout<<"product of odd no is"<<product<<endl;
return 0;
}