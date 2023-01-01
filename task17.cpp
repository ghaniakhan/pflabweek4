#include<iostream>
using namespace std;
void input(string countryname,int priceindollars);
main ()
{
string  countryname;
int  priceindollars;
while(true){ 
cout<< "enter country name :";
cin>> countryname; 
cout<< "enter price in dollars :";
cin>> priceindollars;   
input(countryname,priceindollars);
}
}
void input(string countryname,int priceindollars)
{
if(countryname=="pakistan"){
int paktotaldiscount;
int paktotalpriceafterdiscount;
paktotaldiscount=((priceindollars*5)/100);
paktotalpriceafterdiscount= (priceindollars-paktotaldiscount);
cout<< "paktotalpriceafterdiscount"<< paktotalpriceafterdiscount<< endl;}
int irelanddiscount;
int irelandticketpriceafterdiscount;
if(countryname=="ireland"){
irelanddiscount= ((priceindollars*10)/100);
irelandticketpriceafterdiscount= (priceindollars-irelanddiscount); 
cout<< "irelandticketpriceafterdiscount"<<irelandticketpriceafterdiscount<< endl;}
int indiadicountonticket;
int indiatotaltickrtpriceafterdiscount;
if(countryname=="india"){
indiadicountonticket= ((priceindollars*20)/100);
indiatotaltickrtpriceafterdiscount=priceindollars-indiadicountonticket;
cout<< "indiatotaltickrtpriceafterdiscount"<< indiatotaltickrtpriceafterdiscount<< endl;}
int englanddiscountonticket;
int englandtotalticketpriceafterdiscount;
if(countryname=="england"){
englanddiscountonticket=((priceindollars*30)/100);
englandtotalticketpriceafterdiscount=(priceindollars-englanddiscountonticket);
cout<< "englandtotalticketpriceafterdiscount"<< englandtotalticketpriceafterdiscount<< endl;}
int canadaticketdiscount;
int canadaticketpriceafterdiscount;
if(countryname=="canada"){
canadaticketdiscount=((priceindollars*45)/100);
canadaticketpriceafterdiscount=(priceindollars-canadaticketdiscount);
cout<< "canadaticketpriceafterdiscount"<< canadaticketpriceafterdiscount<< endl;}
}


