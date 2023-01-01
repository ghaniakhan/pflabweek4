 d#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
system("cls");
cout<< "  #                    ";                      
gotoxy(20,10);  
cout<< " # #                   ";                    
gotoxy(20,11);
cout<< " ###                   ";                  
gotoxy(20,12);
cout<< " # #                   ";
gotoxy(20,13);
cout<< " # #                   "<< endl;
gotoxy(20,15);                    
cout<< " #                     ";
gotoxy(20,16);
cout<< " #                     ";
gotoxy(20,17);
cout<< " #                     ";
gotoxy(20,18);
cout<< " #                     ";
gotoxy(20,19);
cout<< " #                    ";
gotoxy(20,20); 
cout<< " ######               "<< endl;
gotoxy(20,24);
cout<< "   #####              ";
gotoxy(20,25);
cout<< "     #                ";
gotoxy(20,26);
cout<< "     #                ";
gotoxy(20,27);
cout<< "     #                ";
gotoxy(20,28);
cout<< "   #####              ";
}     