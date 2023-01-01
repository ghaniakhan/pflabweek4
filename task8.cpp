#include<iostream>
using namespace std;
void totalamount(string day,int amount);
main ()
{
string day;
int amount;
while(true){
cout<< "enter day :";
cin>> day;
cout<< "enter amount :";
cin>> amount;
totalamount(day,amount);
}
}
void totalamount(string day,int amount)
{
if (day=="sunday"){
int amount1;
int payableAmount;
amount1= ((amount*10)/100);
payableAmount= amount-amount1;
cout<< "payableamount :" << payableAmount<< endl;
}
if (day!="sunday"){
int amount2;
int payableamount2;
amount2= ((amount*5)/100);
payableamount2= amount-amount2;
cout<< "payableamount2 :" << payableamount2<< endl;
}
}
