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

void rectangle_printing(int number)
{
    int row=1;
    int column=0;
    int a=number;
    for(int A=1;A<=number;A++)
    {
        for(int B=column;B<=a;B++)
        {
            gotoRowCol(A,B);
            cout<<"*";
            sleep(500);
        }
        for(int C=row+1;C<=a;C++)
        {
            gotoRowCol(C,a);
            cout<<"*";
            sleep(500);
        }
        for(int D=a-1;D>=column;D--)
        {
            gotoRowCol(a,D);
            cout<<"*";
            sleep(500);
        }
        for(int E=a;E>row;E--)
        {
            gotoRowCol(E,column);
            cout<<"*";
            sleep(500);
        }
        column++;
        row++;
        a--;
    }
}
void erasing_rectangle(int number)
{
    int row;
    int column;
    int a;

    if(number%2==0)
    {
         row=number/2;
         column=row-1;
         a=row+1;
    }
    else
    {
         row=number/2+1;
         column=row-1;
         a=row;
    }


    for(int A=1;A<number;A++)
    {
        for(int E=row+1;E<a;E++)
        {
            gotoRowCol(E,column);
            cout<<" ";
            sleep(500);
        }
        for(int D=column;D<a;D++)
        {
            gotoRowCol(a,D);
            cout<<" ";
            sleep(500);
        }
        for(int C=a;C>=row;C--)
        {
            gotoRowCol(C,a);
            cout<<" ";
            sleep(500);
        }
        for(int B=a;B>=column;B--)
        {
            gotoRowCol(row,B);
            cout<<" ";
            sleep(500);
        }
        row--;
        column--;
        a++;
        if(row<1)
            {
                break;
            }
    }
}
int main()
{
    cout<<"Enter number of rows please: ";
    int number;
    cin>>number;
    while(true)
    {
        rectangle_printing(number);
        erasing_rectangle(number);
    }
    getch();
    return 0;
}
