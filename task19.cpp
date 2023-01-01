#include<iostream>
using namespace std;
void input(int noofwhiteroses,int noofredroses,int nooftulips,int flowerprice);
main ()
{
int noofwhiteroses;
int noofredroses;
int nooftulips;
int flowerprice;
cout<< "enter no of white roses :";
cin>>noofwhiteroses; 
cout<< "enter no of red roses :";
cin>>noofredroses;
cout<< "enter no of tulips :";
cin>>nooftulips;  
cout<< "enter flower price :";
cin>>  flowerprice;  
input(noofwhiteroses,noofredroses,nooftulips,flowerprice); 
}
void input(int noofwhiteroses,int noofredroses,int nooftulips,int flowerprice)
{
int discount;
int priceafterdiscount;
if(flowerprice>200){
discount=((flowerprice*20)/100);
priceafterdiscount= (flowerprice-discount);
cout<< "price after discount "<<priceafterdiscount<< endl;
}
}
