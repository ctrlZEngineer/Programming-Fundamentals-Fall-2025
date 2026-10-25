#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void gotoRowCol(int rpos,int cpos)
{
    COORD scrn;
    HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X=cpos;
    scrn.Y=rpos;
    SetConsoleCursorPosition(hOutput,scrn);
}
int Map2Dto1D(int ri,int ci,int Dim)
{
    return (ri-1)*Dim+(ci-1);
}
void initialize_board(char B[],int dim)
{
    for(int i=0;i<dim*dim;i++)
        B[i]='-';
}
void box(int row,int col)
{
    int endrow=row+4;
    int endcol=col+7;
    for(int i=col;i<=endcol;i++)
    {
        gotoRowCol(row,i);
        cout<<char(61);
        gotoRowCol(endrow,i);
        cout<<char(61);
    }
    for(int i=row;i<=endrow;i++)
    {
        gotoRowCol(i,col);
        cout<<char(61);
        gotoRowCol(i,endcol);
        cout<<char(61);
    }
}
void print_board(char A[],int dimension)
{
    system("cls");
    gotoRowCol(1,70);
    cout<<"GOMOKU. Let's Play";
    int row_value=8;
    int column_value=44;
    for(int i=1;i<=dimension;i++)
    {
        gotoRowCol(5,column_value);
        cout<<i;
        column_value+=7;
        gotoRowCol(row_value,37);
        cout<<i;
        row_value+=4;
    }
    int row=6,col=40;
    for(int i=0;i<dimension*dimension;i++)
    {
        box(row,col);
        gotoRowCol(row+2,col+4);
        cout<<A[i];
        col+=7;
        if((i+1)%dimension==0)
        {
            col=40;
            row+=4;
        }
    }
}
bool validMove(char B[],int dim,int r,int c)
{
    if(r<1||r>dim||c<1||c>dim||B[Map2Dto1D(r,c,dim)]!='-')
        return false;
    return true;
}
bool isDraw(char B[],int dim)
{
    for(int i=0;i<dim*dim;i++)
        if(B[i]=='-')
            return false;
    return true;
}
bool checkWin(char B[],int dim,int r,int c,char s)
{
    int a=0;
    for(int i=1;i<=dim;i++)
    {
        if(B[Map2Dto1D(r,i,dim)] == s)
            a++;
        else
            a=0;
        if(a==5)
            return true;
    }
    a=0;
    for(int i=1;i<=dim;i++)
    {
        if(B[Map2Dto1D(i,c,dim)]==s)
            a++;
        else
            a=0;
        if(a==5)
            return true;
    }
    int i=r,j=c;
    while(i>1&&j>1)
    {
        i--;
        j--;
    }
    while(i<=dim&&j<=dim)
    {
        if(B[Map2Dto1D(i,j,dim)]==s)
            a++;
        else
            a=0;
        if(a==5)
            return true;
        i++;
        j++;
    }
    a=0;
    i=r;j=c;
    while(i<dim&&j>1)
    {
        i++;
        j--;
    }
    while(i>=1&&j<=dim)
    {
        if(B[Map2Dto1D(i,j,dim)]==s)
            a++;
        else
            a=0;
        if(a==5)
            return true;
        i--;
        j++;
    }
    return false;
}
int playTurn(char B[],int dim,char players[],int turn)
{
    int r,c;
    bool moveDone=true;
    while(moveDone)
    {
        print_board(B,dim);
        gotoRowCol(3,60);
        cout<<"Player "<<turn+1<<" ("<<players[turn]<<") Enter row and column please: ";
        cin>>r>>c;
        if(validMove(B,dim,r,c))
        {
            B[Map2Dto1D(r,c,dim)]=players[turn];
            moveDone=false;
        }
        else
        {
            gotoRowCol(4,60);
            cout<<"Invalid Move! Press any key...";
            getch();
        }
    }
    if(checkWin(B,dim,r,c,players[turn]))
    {
        print_board(B,dim);
        gotoRowCol(4,60);
        cout<<"Player "<<turn+1<<" ("<<players[turn]<< ") WINS!";
        getch();
    }
    if(isDraw(B,dim))
    {
        print_board(B,dim);
        gotoRowCol(4,60);
        cout<<"GAME DRAW!";
        getch();
    }
    return 1 - turn;
}
int main()
{
    int dim;
    gotoRowCol(2,60);
    cout<<"Enter board dimension: ";
    cin>>dim;
    char board[dim*dim];
    initialize_board(board,dim);
    char players[2]={'X','O'};
    int turn=0;
    while(true)
    {
        turn=playTurn(board,dim,players,turn);
    }
    return 0;
}
