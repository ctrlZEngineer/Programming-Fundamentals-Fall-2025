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
void hollow_glass()
{
    for(int A=15;A<=40;A++)
    {
        gotoRowCol(5,A);
        cout<<"*";
        sleep(50);
    }
    int a=40;
    for(int B=5;B<=15;B++)
    {
        gotoRowCol(B,a);
        cout<<"*";
        sleep(50);
        a--;
    }
    for(int B=15;B<17;B++)
    {
        gotoRowCol(B,30);
        cout<<"*";
        sleep(50);
    }
    a=30;
    for(int C=17;C<27;C++)
    {
        gotoRowCol(C,a);
        cout<<"*";
        sleep(50);
        a++;
    }
    for(int D=39;D>=15;D--)
    {
        gotoRowCol(26,D);
        cout<<"*";
        sleep(50);
    }
    a=15;
    for(int B=26;B>16;B--)
    {
        gotoRowCol(B,a);
        cout<<"*";
        sleep(50);
        a++;
    }
    a=25;
    for(int C=15;C>5;C--)
    {
        gotoRowCol(C,a);
        cout<<"*";
        sleep(50);
        a--;
    }
    for(int C=16;C>=15;C--)
    {
        gotoRowCol(C,25);
        cout<<"*";
        sleep(50);
    }
    int ab=19, b=36, c=7;
    for(int A=1;A<=8;A++)
    {
        for(int B=ab;B<=b;B++)
        {
            gotoRowCol(c,B);
            cout<<"*";
            sleep(50);
        }
        c++;
        ab++;
        b--;
    }
    getch();
    ab=19, b=36, c=7;
    int midrow=15;
    int row = 25;
    int column = 19;
    int position;
    int increment = 1;
        for(int A=1;A<=8;A++)
    {
        for(int B=ab;B<=b;B++)
        {
            gotoRowCol(c,B);
            cout<<" ";
            sleep(500);
            position= b-13;
            for(int D=midrow;D<=position;D++)
            {
                gotoRowCol(D,28);
                cout<<"*";
                sleep(500);
                gotoRowCol(D,28);
                cout<<" ";
                sleep(500);
                if(D == b-13)
                {
                    gotoRowCol(row,column);
                    cout<<"*";
                }
            }
            column++;
        }
        column = 19 + increment;
        position--;
        row--;
        c++;
        ab++;
        b--;
        increment++;
    }
    gotoRowCol(28,12);
}
int main()
{
    hollow_glass();
    return 0;
}

