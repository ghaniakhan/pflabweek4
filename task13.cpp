#include<iostream>
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
gotoxy(30,15);
cout<< "               ****        *              *    ****     *******     *  * * *   "; 
gotoxy(30,16);                                                  
cout<< "              *    *       *              *   *     *      *       *           ";
gotoxy(30,17);                                                   
cout<< "             *      *      *              *   *      *     *         *         ";
gotoxy(30,18);                                                
cout<< "             ********      *      *  *    *   ********    *            *       ";
gotoxy(30,19);                                            
cout<< "             *      *      *   *       *  *   *       *    *                *  ";
gotoxy(30,20);                                                    
cout<< "             *      *      *              *   *       *  *******      * * * *  ";
}
                                          