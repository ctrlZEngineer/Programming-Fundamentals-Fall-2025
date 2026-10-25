#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void gotoRowCol(int rpos,int cpos)
{
    COORD scrn;
    HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X=cpos;
    scrn.Y=rpos;
    SetConsoleCursorPosition(hOutput,scrn);
}
void sleep(int m)
{
    for(int j=0;j<m*21000;j++)
    {
    }
}
bool collision(int r,int c)
{
    if(r<=6||r>=40||c<=6||c>=180) return true;
    if(r==12&&c>=7&&c<=35) return true;
    if(c==25&&r>=17&&r<=29) return true;
    if(r==25&&c>=7&&c<=25) return true;
    if(r==12&&c>=161&&c<=179) return true;
    if(c==161&&r>=17&&r<=24) return true;
    if(r==25&&c>=161&&c<=179) return true;
    if(c==120&&r>=13&&r<=39) return true;
    if(c==104&&r>=7&&r<=30) return true;
    if(r==19&&c>=85&&c<=104) return true;
    if(r==28&&c>=120&&c<=140) return true;
    if(r>=28&&r<=34&&c==140) return true;
    if(r==34&&c>=146&&c<=155) return true;
    if(c==85&&r>=12&&r<=25) return true;
    if(r>=12&&r<=19&&c==35) return true;
    if(c==42&&r>=22&&r<=32) return true;
    if(r>=33&&r<=39&&c==42) return true;
    if(r==26&&c>=70&&c<=85) return true;
    if(c==70&&r>=27&&r<=35) return true;
    if(r==12&&c>=55&&c<=84) return true;
    return false;
}
void food(int &fr,int &fc)
{
    do
    {
        fr=7+rand()%33;
        fc=7+rand()%173;
    }
    while(collision(fr,fc));
    gotoRowCol(fr,fc);
    cout << "*";
}
void snake(int &score)
{
    int headRow=20,headCol=50;
    int tailRow=20,tailCol=49;
    int prevHeadRow,prevHeadCol;
    int direction=-1;
    bool running=true;
    gotoRowCol(tailRow,tailCol);
    cout<<"o";
    gotoRowCol(headRow,headCol);
    cout<<"O";
    int foodRow,foodCol;
    food(foodRow,foodCol);
    int length=1;
    while(running)
    {
    if(kbhit())
    {
        int key=getch();
        if(key==224)
        {
        key=getch();
        if(key==77&&direction!=2)       direction=0;
        else if(key==80&&direction!=3)  direction=1;
        else if(key==75&&direction!=0)  direction=2;
        else if(key==72&&direction!=1)  direction=3;
        }
    }
        prevHeadRow=headRow;
        prevHeadCol=headCol;
        if(direction==0) headCol++;
        else if(direction==1) headRow++;
        else if(direction==2) headCol--;
        else if(direction==3) headRow--;
    if(collision(headRow,headCol))
    {
            running=false;
            break;
    }
    gotoRowCol(tailRow,tailCol);
    for(int i=1;i<=length;i++)
    {
    cout<<" ";
    }
    tailRow=prevHeadRow;
    tailCol=prevHeadCol;
    gotoRowCol(tailRow,tailCol);
    for(int i=1;i<=length;i++)
    {
    cout << "o";
    }
    gotoRowCol(headRow,headCol);
    cout<<"O";
    if(headRow==foodRow&&headCol==foodCol)
    {
    length++;
    score +=10;
    gotoRowCol(4,160);
    cout<<"Score: "<<score;
    food(foodRow,foodCol);
    }
    gotoRowCol(tailRow,tailCol);
    for(int i=1;i<=length;i++)
    {
    cout << "o";
    }
    sleep(2000);
    }
    gotoRowCol(41,55);
    cout<<"GAME OVER! Final Score: "<<score;
}
void horizontal_barriers(int row,int starting_column,int ending_column)
{
    char A=206;
    for (int a=starting_column;a<=ending_column;a++)
    {
        gotoRowCol(row,a);
        cout<<A;
    }
}
void vertical_barriers(int column,int starting_row,int ending_row)
{
    char A=206;
    for (int a=starting_row;a<=ending_row;a++)
    {
        gotoRowCol(a,column);
        cout<<A;
    }
}
void diagonal_barriers(int starting_row,int ending_row,int column)
{
    char A=206;
    for (int a=starting_row;a<=ending_row;a++)
    {
        gotoRowCol(a,column);
        cout<<A;
        column++;
    }
}
void barriers()
{
    horizontal_barriers(12,7,35);
    vertical_barriers(25,17,29);
    horizontal_barriers(25,7,25);
    horizontal_barriers(12,161,179);
    vertical_barriers(161,17,24);
    horizontal_barriers(25,161,179);
    vertical_barriers(120,13,39);
    vertical_barriers(104,7,30);
    horizontal_barriers(19,85,104);
    horizontal_barriers(28,120,140);
    diagonal_barriers(28,34,140);
    horizontal_barriers(34,146,155);
    vertical_barriers(85,12,25);
    diagonal_barriers(12,19,35);
    vertical_barriers(42,22,32);
    diagonal_barriers(33,39,42);
    horizontal_barriers(26,70,85);
    vertical_barriers(70,27,35);
    horizontal_barriers(12,55,84);
}
void maze()
{
    char box=219;
    gotoRowCol(3,90);
    cout<<"Nokia";
    gotoRowCol(4,87);
    cout<<"Snake Game";
    gotoRowCol(4,160);
    cout<<"Score: 0";
    for(int i=6;i<=180;i++)
    {
        gotoRowCol(6,i);
        cout<<box;
    }
    for(int i=7;i<=40;i++)
    {
        gotoRowCol(i,180);
        cout<<box;
    }
    for(int i=180;i>=6;i--)
    {
        gotoRowCol(40,i);
        cout<<box;
    }
    for(int i=40;i>=7;i--)
    {
        gotoRowCol(i,6);
        cout<<box;
    }
    barriers();
    int score=0;
    snake(score);
}
int main()
{
    srand(time(0));
    maze();
    gotoRowCol(45,0);
    return 0;
}
