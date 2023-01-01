#include<iostream>
using namespace std;
void multiply(int number3,number4);
main ()
{
int number3;
int number4;
char operation;
cout<< "enter first number :";
cin>> number3;
cout<< "enter second number :";
cin>> number4;
cout<< "operation(+,*):";
cin>> operation;
if(operation== '*'){
  cout<< "multiply";
multiply(number3,number4);
}
}
void multiply(int number3,number4)
{
int multiply;
multiply= number3*number4;
cout<< "multiply :"<< multiply;
}
}