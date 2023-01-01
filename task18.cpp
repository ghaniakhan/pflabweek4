#include<iostream>
using namespace std;
void input(int speed);
main ()
{
int speed;
while(true){
cout<< "enter speed :";
cin>> speed;
input(speed);
}
}
void input(int speed)
{
if(speed<100){
cout<< "perfect! you are good going "<< endl;
}
if(speed==100){
cout<< "perfect! you are good going "<< endl;
}
if(speed>100){
cout<< "halt...you will be challenged"<< endl;
}
}