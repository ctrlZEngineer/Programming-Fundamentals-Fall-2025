#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>
#include <stdlib.h>
void gotoRowCol(int rpos, int cpos)
{
int xpos=cpos, ypos = rpos;
COORD scrn;
HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
scrn.X = cpos;
scrn.Y = rpos;
SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
 for(int j=0;j<m*21000;j++)
 {
 }
}
void circle(int radius,int center_x,int center_y)
{
    for(int angle=1;angle<=360;angle++)
    {
        double angled=angle*3.14159/180.0;
        int x=center_x+radius*cos(angled);
        int y=center_y+radius*sin(angled);
        gotoRowCol(y,x*2);
        cout<<"*";
        sleep(50);
    }
}
void smile(int radius,int center_x,int center_y)
{
    for(int deg=-10;deg<190;deg++)
    {
        double angle=deg*3.14159/180.0;
        int x=center_x+radius*cos(angle);
        int y=center_y+radius*sin(angle)/2;
        gotoRowCol(y,x*2);
        cout<<"*";
        sleep(50);
    }
}
int main()
{
    circle(10, 25, 18);
    circle(2, 20, 15);
    circle(2, 30, 15);
    smile(7, 25, 20);
    gotoRowCol(30, 0);
    getch();
    return 0;
}

