#include<iostream>
using namespace std;
void isnum(int num1,int num2);
main ()
{
int num1;
int num2;
cout<< "enter first number :";
cin>>  num1;
cout<< "enter second number :";
cin>> num2;
isnum(num1,num2);
}
void isnum(int num1,int num2) 
{
if(num1%num2!=0){
cout<< "false ";
}
if(num1%num2==0){
cout<< "true";
}
} 