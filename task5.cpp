#include<iostream>
using namespace std;
void iseven(int number);
main ()
{
int number;
cout<< "enter number 1 :";
cin>> number;
iseven(number);
}
void iseven(int number)
{
if(number%2!=0){
  cout<< "it ia an odd number";}
if(number%2==0){
  cout<< "it is an even number";
}
}