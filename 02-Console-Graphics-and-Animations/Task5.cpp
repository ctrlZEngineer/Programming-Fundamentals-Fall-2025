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
void spiral(int radius,int center_x,int center_y)
{
    double r=radius;
    for(int angle=1;angle<=5000;angle++)
    {
        double rad=angle*3.14159/180.0;
        int x=center_x+r*cos(rad);
        int y=center_y+r*sin(rad);
        gotoRowCol(y,x);
        cout<<"*";
        r=r+0.05;
        sleep(50);
    }
}
int main()
{

    spiral(1,53,26);

    getch();
    return 0;
}

