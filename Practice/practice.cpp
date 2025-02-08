#include <iostream>
using namespace std;

int main(){
   int num;

   cout<<"Enter your number: ";
   cin >> num;
   int firstdig = num % 10;
   int lastdig = 0;
   while(num>=10){
      num /= 10;
      if(num<=10){
         lastdig = num;
      }
   }
   int sum = firstdig + lastdig;
   cout<<"Sum of first and last digits is : "<<sum;
}