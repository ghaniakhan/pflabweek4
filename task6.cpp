#include<iostream>
using namespace std;
void greaternumber(int firstnumber, int secondnumber);
main ()
{
int firstnumber;
int secondnumber;
cout<< "enter first number :";
cin>> firstnumber;
cout<< "enter second number :";
cin>> secondnumber;
greaternumber(firstnumber,secondnumber); 
}
void greaternumber(int firstnumber, int secondnumber)
{
if(firstnumber>secondnumber){
  cout<< "first number is greater";
}
if(secondnumber>firstnumber){
  cout<< "second number is greater";
} 
} 