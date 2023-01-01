#include<iostream>
using namespace std;
void totalamount(string day,int amount);
main ()
{
string day;
int amount;
cout<< "enter day :";
cin>> day;
cout<< "enter amount :";
cin>> amount;
totalamount(day,amount);
}
void totalamount(string day,int amount)
{
if (day=="sunday"){
int amount1;
int payableAmount;
amount1= ((amount*10)/100);
payableAmount= amount-amount1;
cout<< "payableamount :" << payableAmount;
}
if (day!="sunday"){
cout<< "sorry mam";
}
}
