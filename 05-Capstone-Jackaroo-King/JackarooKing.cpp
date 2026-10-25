#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>
#include <stdlib.h>
#include <ctime>
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
void boundary()
{
    for(int i=50;i<=125;i++)//upper
    {
        gotoRowCol(6,i);
        cout<<char(219);
    }
    for(int i=6;i<=34;i++)//left
    {
        gotoRowCol(i,125);
        cout<<char(219);
    }
    for(int i=125;i>=50;i--)//bottom
    {
        gotoRowCol(34,i);
        cout<<char(219);
    }
    for(int i=34;i>=6;i--)//right
    {
        gotoRowCol(i,50);
        cout<<char(219);
    }
    for(int i=6;i<=13;i++)//vertical upper home
    {
        gotoRowCol(i,105);
        cout<<char(219);
    }
    for(int i=105;i<=125;i++)//horizontal upper home
    {
        gotoRowCol(13,i);
        cout<<char(219);
    }
    for(int i=50;i<=70;i++)//horizontal lower home
    {
        gotoRowCol(27,i);
        cout<<char(219);
    }
    for(int i=27;i<=34;i++)//vertical lower home
    {
        gotoRowCol(i,70);
        cout<<char(219);
    }
}
void center()
{
    for(int i=82;i<=93;i++)
    {
        gotoRowCol(18,i);
        cout<<char(219);
    }
    for(int i=18;i<=22;i++)
    {
        gotoRowCol(i,93);
        cout<<char(219);
    }
    for(int i=93;i>=82;i--)
    {
        gotoRowCol(22,i);
        cout<<char(219);
    }
    for(int i=22;i>=18;i--)
    {
        gotoRowCol(i,82);
        cout<<char(219);
    }

}
void path()
{
    for(int i=75;i<=95;i+=5)//bottom lower
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(31,j);
            cout<<char(219);
        }
        for(int j=31;j<=32;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(33,j);
            cout<<char(219);
        }
        for(int j=32;j>=31;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
    for(int i=23;i<=29;i+=2)//bottom right
    {
        for(int j=75;j<=80;j++)
        {
            gotoRowCol(i,j);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,80);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,75);
            cout<<char(219);
        }
    }
    for(int i=23;i<=29;i+=2)//bottom home
    {
        for(int j=85;j<=90;j++)
        {
            gotoRowCol(i,j);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,90);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,85);
            cout<<char(219);
        }
    }
    for(int i=23;i<=29;i+=2)//bottom left
    {
        for(int j=95;j<=100;j++)
        {
            gotoRowCol(i,j);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,100);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,95);
            cout<<char(219);
        }
    }
    for(int i=50;i<=70;i+=5)//mid bottom right
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(23,j);
            cout<<char(219);
        }
        for(int j=23;j<=24;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(25,j);
            cout<<char(219);
        }
        for(int j=24;j>=23;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
    for(int i=100;i<=120;i+=5)//mid bottom left
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(23,j);
            cout<<char(219);
        }
        for(int j=23;j<=24;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(25,j);
            cout<<char(219);
        }
        for(int j=24;j>=23;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
    for(int i=75;i<=95;i+=5)//upper lower
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(7,j);
            cout<<char(219);
        }
        for(int j=7;j<=8;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(9,j);
            cout<<char(219);
        }
        for(int j=8;j>=7;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
    for(int i=7;i<=15;i+=2)//upper right
    {
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,80);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,75);
            cout<<char(219);
        }
        for(int j=80;j>=75;j--)
        {
            gotoRowCol(i+2,j);
            cout<<char(219);
        }
    }
    for(int i=7;i<=15;i+=2)//upper home
    {
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,90);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,85);
            cout<<char(219);
        }
        for(int j=90;j>=85;j--)
        {
            gotoRowCol(i+2,j);
            cout<<char(219);
        }
    }
    for(int i=7;i<=15;i+=2)//upper left
    {
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,100);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,95);
            cout<<char(219);
        }
        for(int j=100;j>=95;j--)
        {
            gotoRowCol(i+2,j);
            cout<<char(219);
        }
    }
      for(int i=50;i<=70;i+=5)//mid upper right
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(15,j);
            cout<<char(219);
        }
        for(int j=15;j<=16;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(17,j);
            cout<<char(219);
        }
        for(int j=16;j>=15;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
     for(int i=100;i<=120;i+=5)//mid upper left
    {
        for(int j=i;j<=i+5;j++)
        {
            gotoRowCol(15,j);
            cout<<char(219);
        }
        for(int j=15;j<=16;j++)
        {
            gotoRowCol(j,i+5);
            cout<<char(219);
        }
        for(int j=i+5;j>=i;j--)
        {
            gotoRowCol(17,j);
            cout<<char(219);
        }
        for(int j=16;j>=15;j--)
        {
            gotoRowCol(j,i);
            cout<<char(219);
        }
    }
     for(int i=17;i<=21;i+=2)//mid mid right
    {
        for(int j=50;j<=55;j++)
        {
            gotoRowCol(i,j);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,55);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,50);
            cout<<char(219);
        }
        for(int j=55;j>=50;j--)
        {
            gotoRowCol(i+2,j);
            cout<<char(219);
        }
    }
    for(int i=17;i<=21;i+=2)//mid mid left
    {
        for(int j=120;j<=125;j++)
        {
            gotoRowCol(i,j);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,125);
            cout<<char(219);
        }
        for(int j=i;j<=i+2;j++)
        {
            gotoRowCol(j,120);
            cout<<char(219);
        }
        for(int j=125;j>=120;j--)
        {
            gotoRowCol(i+2,j);
            cout<<char(219);
        }
    }
}
int cardidentifierA(int first,int second,int third,int fourth,int a)
{
    int b;
    if(a==1)
        b=first;
    else if(a==2)
        b=second;
    else if(a==3)
        b=third;
    else
        b=fourth;


    return b;
}
void cardsA(int &first,int &second,int &third,int &fourth)
{
    for(int i=13;i<=31;i+=6)
    {
        for(int j=i;j<=i+4;j++)
        {
            gotoRowCol(29,j);
            cout<<char(196);
        }
         int a=rand()%12;
         gotoRowCol(30,i+1);
         if(a==0)
         cout<<" "<<"A";
         else if(a==1)
         cout<<" "<<"J";
         else if(a==11)
          cout<<" "<<"K";
         else if(a==4)
          cout<<"-4";
         else if(a!=10)
          cout<<" "<<a;
          else
            cout<<a;
        for(int j=i+4;j>=i;j--)
        {
            gotoRowCol(31,j);
            cout<<char(196);
        }
        for(int j=29;j<=31;j++)
        {
            gotoRowCol(j,i+4);
            cout<<char(179);
        }
        for(int j=31;j>=29;j--)
        {
            gotoRowCol(j,i);
            cout<<char(179);
        }
        if(i==13)
        {
            gotoRowCol(32,i+1);
            cout<<1;
            first=a;
        }
        else if(i==19)
        {
             gotoRowCol(32,i+1);
            cout<<2;
            second=a;
        }
        else if(i==25)
        {
             gotoRowCol(32,i+1);
            cout<<3;
            third=a;
        }
        else
        {
             gotoRowCol(32,i+1);
            cout<<4;
            fourth=a;
        }

    }
}
int cardidentifierB(int first,int second,int third,int fourth,int a)
{
    int b;
    if(a==1)
        b=first;
    else if(a==2)
        b=second;
    else if(a==3)
        b=third;
    else
        b=fourth;


    return b;
}
void cardsB(int &first,int &second,int &third,int &fourth)
{
    for(int i=134;i<=152;i+=6)
    {
        for(int j=i;j<=i+4;j++)
        {
            gotoRowCol(10,j);
            cout<<char(196);
        }
        gotoRowCol(13,i+1);
        cout<<1;
         int a=rand()%12;
         gotoRowCol(11,i+1);
        if(a==0)
         cout<<" "<<"A";
         else if(a==1)
         cout<<" "<<"J";
         else if(a==11)
          cout<<" "<<"K";
         else if(a==4)
          cout<<"-4";
         else if(a!=10)
          cout<<" "<<a;
          else
            cout<<a;
        for(int j=i+4;j>=i;j--)
        {
            gotoRowCol(12,j);
            cout<<char(196);
        }
        for(int j=10;j<=12;j++)
        {
            gotoRowCol(j,i+4);
            cout<<char(179);
        }
        for(int j=12;j>=10;j--)
        {
            gotoRowCol(j,i);
            cout<<char(179);
        }
        if(i==134)
        {
            gotoRowCol(13,i+1);
            cout<<1;
            first=a;
        }
        else if(i==140)
        {
             gotoRowCol(13,i+1);
            cout<<2;
            second=a;
        }
        else if(i==146)
        {
             gotoRowCol(13,i+1);
            cout<<3;
            third=a;
        }
        else
        {
             gotoRowCol(13,i+1);
            cout<<4;
            fourth=a;
        }

    }
}
void storingarray(int row,int col,int Arow[],int Acol[],int index)
{
    Arow[index]=row;
    Acol[index]=col;
}
void movingarrayA(int Arow[],int Acol[],int index)
{
    for(int i=32;i>=26;i-=2)
    {

        storingarray(i,76,Arow,Acol,index);
        gotoRowCol(i,76);
        index++;
    }
    for(int i=76;i>=56;i-=5)
    {

         storingarray(24,i,Arow,Acol,index);
         gotoRowCol(24,i);
        index++;
    }
    for(int i=24;i>=18;i-=2)
    {

         storingarray(i,51,Arow,Acol,index);
         gotoRowCol(i,51);
        index++;
    }
    for(int i=51;i<=71;i+=5)
    {
        gotoRowCol(16,i);
         storingarray(16,i,Arow,Acol,index);
        index++;
    }
    for(int i=16;i>=10;i-=2)
    {

         storingarray(i,76,Arow,Acol,index);
         gotoRowCol(i,76);
        index++;
    }
    for(int i=76;i<=91;i+=5)
    {
        storingarray(8,i,Arow,Acol,index);
        gotoRowCol(8,i);
        index++;
    }
    for(int i=8;i<=14;i+=2)
    {

        storingarray(i,96,Arow,Acol,index);
         gotoRowCol(i,96);
        index++;
    }
    for(int i=96;i<=116;i+=5)
    {

         storingarray(16,i,Arow,Acol,index);
         gotoRowCol(16,i);
        index++;
    }
    for(int i=16;i<=22;i+=2)
    {

         storingarray(i,121,Arow,Acol,index);
         gotoRowCol(i,121);
        index++;
    }
    for(int i=121;i>=101;i-=5)
    {

         storingarray(24,i,Arow,Acol,index);
         gotoRowCol(24,i);
         index++;
    }
    for(int i=24;i<=30;i+=2)
    {

         storingarray(i,96,Arow,Acol,index);
         gotoRowCol(i,96);
         index++;
    }
    for(int i=96;i>=91;i-=5)
    {

         storingarray(32,i,Arow,Acol,index);
         gotoRowCol(32,i);
         index++;
    }
    for(int i=32;i>=24;i-=2)
    {
         storingarray(i,86,Arow,Acol,index);
         gotoRowCol(i,86);
         index++;
    }
}
void movingarrayB(int Brow[],int Bcol[],int index)
{
    for(int i=8;i<=14;i+=2)
    {
        storingarray(i,96,Brow,Bcol,index);
         gotoRowCol(i,96);
        index++;
    }
        for(int i=96;i<=116;i+=5)
    {

         storingarray(16,i,Brow,Bcol,index);
         gotoRowCol(16,i);
        index++;
    }
     for(int i=16;i<=22;i+=2)
    {

         storingarray(i,121,Brow,Bcol,index);
         gotoRowCol(i,121);
        index++;
    }
    for(int i=121;i>=101;i-=5)
    {

         storingarray(24,i,Brow,Bcol,index);
         gotoRowCol(24,i);
         index++;
    }
    for(int i=24;i<=30;i+=2)
    {

         storingarray(i,96,Brow,Bcol,index);
         gotoRowCol(i,96);
         index++;
    }
    for(int i=96;i>=81;i-=5)
    {

         storingarray(32,i,Brow,Bcol,index);
         gotoRowCol(32,i);
         index++;
    }
    for(int i=32;i>=26;i-=2)
    {

        storingarray(i,76,Brow,Bcol,index);
        gotoRowCol(i,76);
        index++;
    }
    for(int i=76;i>=56;i-=5)
    {

         storingarray(24,i,Brow,Bcol,index);
         gotoRowCol(24,i);
        index++;
    }
     for(int i=24;i>=18;i-=2)
    {

         storingarray(i,51,Brow,Bcol,index);
         gotoRowCol(i,51);
        index++;
    }
    for(int i=51;i<=71;i+=5)
    {
         gotoRowCol(16,i);
         storingarray(16,i,Brow,Bcol,index);
         index++;
    }
    for(int i=16;i>=10;i-=2)
    {

         storingarray(i,76,Brow,Bcol,index);
         gotoRowCol(i,76);
         index++;
    }
    for(int i=76;i<=81;i+=5)
    {
        storingarray(8,i,Brow,Bcol,index);
        gotoRowCol(8,i);
        index++;
      }
    for(int i=8;i<=16;i+=2)
    {
        storingarray(i,86,Brow,Bcol,index);
        gotoRowCol(i,86);
        index++;
    }

}
void cardhidingA(int a)
{
    if(a==1)
    {
      gotoRowCol(30,14);
      cout<< "XX";
    }
    else if(a==2)
    {
        gotoRowCol(30,20);
        cout<< "XX";
    }
    else if(a==3)
    {
        gotoRowCol(30,26);
        cout<< "XX";
    }
    else
    {
        gotoRowCol(30,32);
        cout<< "XX";
    }
}
void cardhidingB(int a)
{
    if(a==1)
    {
      gotoRowCol(11,135);
      cout<< "XX";
    }
    else if(a==2)
    {
        gotoRowCol(11,141);
        cout<< "XX";
    }
    else if(a==3)
    {
        gotoRowCol(11,147);
        cout<< "XX";
    }
    else
    {
        gotoRowCol(11,153);
        cout<< "XX";
    }
}
void marblesB()
{
    char a[2]={'B','a'};
    char b[2]={'B','b'};
    char c[2]={'B','c'};
    char d[2]={'B','d'};
    gotoRowCol(7,107);
    cout<<b[0]<<b[1];
    gotoRowCol(7,109);
    cout<<d[0]<<d[1];
    gotoRowCol(8,107);
    cout<<a[0]<<a[1];
    gotoRowCol(8,109);
    cout<<c[0]<<c[1];


}
void removestoneA(int a)
{
    if(a==3)
    {
         gotoRowCol(28,67);
         cout<< "  ";
    }
    if(a==2)
    {
        gotoRowCol(29,67);
        cout<< "  ";
    }
    if(a==1)
    {
        gotoRowCol(28,65);
        cout<< "  ";
    }
    if(a==0)
    {
        gotoRowCol(29,65);
        cout<< "  ";
    }
}
void removestoneB(int a)
{
    if(a==3)
    {
         gotoRowCol(8,107);
         cout<< "  ";
    }
    if(a==2)
    {
        gotoRowCol(7,107);
        cout<< "  ";
    }
    if(a==1)
    {
        gotoRowCol(8,109);
        cout<< "  ";
    }
    if(a==0)
    {
        gotoRowCol(7,109);
        cout<< "  ";
    }
}
void marblesA()
{
    char a[2]={'A','a'};
    char b[2]={'A','b'};
    char c[2]={'A','c'};
    char d[2]={'A','d'};
    gotoRowCol(28,65);
    cout<<c[0]<<c[1];
    gotoRowCol(28,67);
    cout<<a[0]<<a[1];
    gotoRowCol(29,65);
    cout<<d[0]<<d[1];
    gotoRowCol(29,67);
    cout<<b[0]<<b[1];

}
void placingmarbleA(int a)
{
    gotoRowCol(32,76);
    if(a==1)
      cout<< "Aa";
    else if(a==2)
      cout<< "Ab";
    else if(a==3)
      cout<< "Ac";
    else if(a==4)
      cout<< "Ad";
}
void placingmarbleB(int a)
{
    gotoRowCol(8,96);
     if(a==1)
      cout<< "Ba";
    else if(a==2)
      cout<< "Bb";
    else if(a==3)
      cout<< "Bc";
    else if(a==4)
      cout<< "Bd";
}
void printcards(int row,int col,int value)
{
         gotoRowCol(row,col);
         if(value==0)
         cout<<" "<<"A";
         else if(value==1)
         cout<<" "<<"J";
         else if(value==11)
          cout<<" "<<"K";
         else if(value==4)
          cout<<"-4";
         else if(value!=10)
          cout<<" "<<value;
          else
            cout<<value;
}
int questioningA()
{
   int a;
   gotoRowCol(12,0);
   cout<<"which marble you want to move (1,2,3,4)for(Aa,Ab,Ac,Ad) ";
   cin>>a;
   return a;
}
int questioningB()
{
   int a;
   gotoRowCol(2,50);
   cout<<"which marble you want to move (1,2,3,4)for(Aa,Ab,Ac,Ad) ";
   cin>>a;
   return a;
}
void checkKillingCondition(
    int marblepositionA[], int marblepositionB[],
    int &marblescountA, int &marblescountB,
    int &summerAa, int &summerAb, int &summerAc, int &summerAd,
    int &summerBa, int &summerBb, int &summerBc, int &summerBd
)
{
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(marblepositionA[i] != 1000 && marblepositionA[i] != 0 &&
               marblepositionA[i] == marblepositionB[j] && marblepositionB[j] != 0)
            {
                marblescountB++;
                removestoneB(marblescountB);

                marblepositionB[j] = 1000;

                if(j==0) summerBa = 0;
                if(j==1) summerBb = 0;
                if(j==2) summerBc = 0;
                if(j==3) summerBd = 0;

                marblesB();
            }
        }
    }


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(marblepositionB[i] != 1000 && marblepositionB[i] != 0 &&
               marblepositionB[i] == marblepositionA[j] && marblepositionA[j] != 0)
            {
                marblescountA++;
                removestoneA(marblescountA);

                marblepositionA[j] = 1000;

                if(j==0) summerAa = 0;
                if(j==1) summerAb = 0;
                if(j==2) summerAc = 0;
                if(j==3) summerAd = 0;

                marblesA();
            }
        }
    }
}
void playing()
{
    char Aaa[2]={'A','a'};
    char Aba[2]={'A','b'};
    char Aca[2]={'A','c'};
    char Ada[2]={'A','d'};
    char Bab[2]={'B','a'};
    char Bbb[2]={'B','b'};
    char Bcb[2]={'B','c'};
    char Bdb[2]={'B','d'};
    int Arow[55];
    int Acol[55];
    int Brow[55];
    int Bcol[55];
    int indexA=0;
    int indexB=0;
    movingarrayA(Arow,Acol,indexA);
    movingarrayB(Brow,Bcol,indexB);
    int marblescountA=4;
    int marblescountB=4;
     int summerAa=0;
     int summerAb=0;
     int summerAc=0;
     int summerAd=0;
     int summerBa=0;
     int summerBb=0;
     int summerBc=0;
     int summerBd=0;
     int xyzA=0;
     int xyzB=0;
     int rdxa=0;
        int rdxb=0;
        int rdxc=0;
        int rdxd=0;
        int Brdxa=0;
        int Brdxb=0;
        int Brdxc=0;
        int Brdxd=0;
     int athomeA=0;
     int athomeB=0;
      int marblepositionA[4];
      int marblepositionB[4];
      for(int i=0;i<=3;i++)
        {
            marblepositionA[i]=1000;
            marblepositionB[i]=1000;
        }
    while(1)
    {
        int firstA=0;
        int secondA=0;
        int thirdA=0;
        int fourthA=0;
        int firstB=0;
        int secondB=0;
        int thirdB=0;
        int fourthB=0;
        cardsA(firstA,secondA,thirdA,fourthA);
        cardsB(firstB,secondB,thirdB,fourthB);
        int XYZAa=0;
        int XYZAb=0;
        int XYZAc=0;
        int XYZAd=0;
        int XYZBa=0;
        int XYZBb=0;
        int XYZBc=0;
        int XYZBd=0;
        int beforelocationA;
        int beforelocationB;

        for(int i=1;i<=4;i++)
        {
            for(int i=135;i<=153;i+=6)
             {
                    gotoRowCol(11,i);
                    cout<< "XX";
                }
            for(int i=14;i<=32;i+=6)
                {
                    gotoRowCol(30,i);
                    cout<< "XX";
                }
            for(int i=14;i<=32;i+=6)
             {
                   if(i==14&&XYZAa!=1)
                    printcards(30,i,firstA);
                   else if(i==20 && XYZAb!=2)
                    printcards(30,i,secondA);
                   else if(i==26 && XYZAc!=3)
                    printcards(30,i,thirdA);
                   else if(i==32 && XYZAd!=4)
                    printcards(30,i,fourthA);
                }
             int a;
             gotoRowCol(10,2);
             cout<< "player "<<1<<" which card you want to throw 1,2,3,4 ";
             cin>>a;
             if(a==1)
                XYZAa=a;
             else if(a==2)
                XYZAb=a;
             else if(a==3)
                XYZAc=a;
             else if(a==4)
                XYZAd=a;
             int b=cardidentifierA(firstA,secondA,thirdA,fourthA,a);
             int rdx=0;
             for(int i=0;i<=3;i++)
             {
                 if(marblepositionA[i]==0&&((i==0&&rdxa==1)||(i==1&&rdxb==1)||(i==2&&rdxc==1)||(i==3&&rdxd==1)))
                    rdx=1;
             }
             if(b==11&&(rdx!=1))
             {
                 marblescountA-=1;
                 if(marblescountA>0)
                 {
                     if(marblescountA==3)
                        xyzA=1;
                     else if(marblescountA==2)
                        xyzA=2;
                     else if(marblescountA==1)
                        xyzA=3;
                     else if(marblescountA==0)
                        xyzA=4;
                      placingmarbleA(xyzA);
                       athomeA++;
                       if(athomeA==1)
                         {
                             marblepositionA[0]=0;
                             rdxa=1;
                         }
                       else if(athomeA==2)
                         {
                             marblepositionA[1]=0;
                             rdxb=1;
                         }
                       else if(athomeA==3)
                         {
                             marblepositionA[2]=0;
                             rdxc=1;
                         }
                       else if(athomeA==4)
                         {
                             marblepositionA[3]=0;
                             rdxd=1;
                         }
                     removestoneA(marblescountA);
                     beforelocationA=0;
                 }
             }
                     int ab;
                     int ba;
                     char gca[3];
             if(b==4&&(marblescountA<=3))
             {
                 int k=1;
                 if(marblescountA<4)
                 {
                     k=questioningA();
                 }

                 int canMove=0;
                 if(k==1&&marblepositionA[0]!=1000)
                     canMove=1;
                 if(k==2&&marblepositionA[1]!=1000)
                     canMove=1;
                 if(k==3&&marblepositionA[2]!=1000)
                     canMove=1;
                 if(k==4&&marblepositionA[3]!=1000)
                     canMove=1;

                 if(canMove==0)
                 {
                     gotoRowCol(14,0);
                     cout<<"This marble is not out yet! Cannot move.";
                     sleep(10000);
                     gotoRowCol(14,0);
                     cout<<"                                           ";
                 }
                 else
                 {
                 int currentPosition;
                 if(k==1)
                     currentPosition=summerAa;
                  if(k==2)
                     currentPosition=summerAb;
                  if(k==3)
                     currentPosition=summerAc;
                  if(k==4)
                     currentPosition=summerAd;

                 for(int step=1;step<=4;step++)
                 {
                     int g=Arow[currentPosition];
                     int h=Acol[currentPosition];
                     gotoRowCol(g,h);
                     cout<< "  ";

                     currentPosition=currentPosition-1;
                     if(currentPosition<0)
                         currentPosition=currentPosition+52;

                     if(k==1)
                     {
                          ab=Arow[currentPosition];
                          ba=Acol[currentPosition];
                          gca[0]='A'; gca[1]='a';
                     }
                     if(k==2)
                     {
                          ab=Arow[currentPosition];
                          ba=Acol[currentPosition];
                          gca[0]='A'; gca[1]='b';
                     }
                     if(k==3)
                     {
                           ab=Arow[currentPosition];
                           ba=Acol[currentPosition];
                           gca[0]='A'; gca[1]='c';
                     }
                     if(k==4)
                     {
                           ab=Arow[currentPosition];
                           ba=Acol[currentPosition];
                           gca[0]='A'; gca[1]='d';
                     }

                     for(int m=0;m<4;m++)
                     {
                         if(marblepositionB[m]==currentPosition && marblepositionB[m]!=0 && currentPosition!=0)
                         {
                             marblescountB++;
                             removestoneB(marblescountB);
                             marblepositionB[m]=1000;
                             if(m==0) summerBa=0;
                             if(m==1) summerBb=0;
                             if(m==2) summerBc=0;
                             if(m==3) summerBd=0;
                             marblesB();
                         }
                     }

                     gotoRowCol(ab,ba);
                     cout<<gca[0]<<gca[1];
                     sleep(5000);
                 }

                 if(k==1)
                 {
                     summerAa=currentPosition;
                     beforelocationA=summerAa;
                     marblepositionA[0]=summerAa;
                 }
                  if(k==2)
                  {
                      summerAb=currentPosition;
                      beforelocationA=summerAb;
                      marblepositionA[1]=summerAb;
                  }
                  if(k==3)
                  {
                       summerAc=currentPosition;
                       beforelocationA=summerAc;
                       marblepositionA[2]=summerAc;
                  }
                  if(k==4)
                  {
                      summerAd=currentPosition;
                      beforelocationA=summerAd;
                      marblepositionA[3]=summerAd;
                  }
                 }
             }
             if((b>=2&&b<=10&&b!=7&&b!=4)&&(marblescountA<=3))
             {
                 int k=1;
                 if(marblescountA<4)
                 {
                     k=questioningA();
                 }

                 int canMove=0;
                 if(k==1&&marblepositionA[0]!=1000)
                     canMove=1;
                 if(k==2&&marblepositionA[1]!=1000)
                     canMove=1;
                 if(k==3&&marblepositionA[2]!=1000)
                     canMove=1;
                 if(k==4&&marblepositionA[3]!=1000)
                     canMove=1;

                 if(canMove==0)
                 {
                     gotoRowCol(14,0);
                     cout<<"This marble is not out yet! Cannot move.";
                     sleep(10000);
                     gotoRowCol(14,0);
                     cout<<"                                           ";
                 }
                 else
                 {
                 int currentPosition;
                 if(k==1)
                     currentPosition=summerAa;
                  if(k==2)
                     currentPosition=summerAb;
                  if(k==3)
                     currentPosition=summerAc;
                  if(k==4)
                     currentPosition=summerAd;

                 for(int step=1;step<=b;step++)
                 {
                     int g=Arow[currentPosition];
                     int h=Acol[currentPosition];
                     gotoRowCol(g,h);
                     cout<< "  ";

                     currentPosition=currentPosition+1;

                     if(k==1)
                     {
                          ab=Arow[currentPosition];
                          ba=Acol[currentPosition];
                          gca[0]='A'; gca[1]='a';
                     }
                     if(k==2)
                     {
                          ab=Arow[currentPosition];
                          ba=Acol[currentPosition];
                          gca[0]='A'; gca[1]='b';
                     }
                     if(k==3)
                     {
                           ab=Arow[currentPosition];
                           ba=Acol[currentPosition];
                           gca[0]='A'; gca[1]='c';
                     }
                     if(k==4)
                     {
                           ab=Arow[currentPosition];
                           ba=Acol[currentPosition];
                           gca[0]='A'; gca[1]='d';
                     }

                     for(int m=0;m<4;m++)
                     {
                         if(marblepositionB[m]==currentPosition && marblepositionB[m]!=0 && currentPosition!=0)
                         {
                             marblescountB++;
                             removestoneB(marblescountB);
                             marblepositionB[m]=1000;
                             if(m==0) summerBa=0;
                             if(m==1) summerBb=0;
                             if(m==2) summerBc=0;
                             if(m==3) summerBd=0;
                             marblesB();
                         }
                     }

                     gotoRowCol(ab,ba);
                     cout<<gca[0]<<gca[1];
                     sleep(5000);
                 }

                 if(k==1)
                 {
                     summerAa=currentPosition;
                     beforelocationA=summerAa;
                     marblepositionA[0]=summerAa;
                 }
                  if(k==2)
                  {
                      summerAb=currentPosition;
                      beforelocationA=summerAb;
                      marblepositionA[1]=summerAb;
                  }
                  if(k==3)
                  {
                       summerAc=currentPosition;
                       beforelocationA=summerAc;
                       marblepositionA[2]=summerAc;
                  }
                  if(k==4)
                  {
                      summerAd=currentPosition;
                      beforelocationA=summerAd;
                      marblepositionA[3]=summerAd;
                  }
                 }
             }
             for(int i=14;i<=32;i+=6)
                {
                    gotoRowCol(30,i);
                    cout<< "XX";
                }
             for(int i=135;i<=153;i+=6)
                {
                    if(i==135 && XYZBa!=1)
                       printcards(11,i,firstB);
                    else if(i==141 && XYZBb!=2)
                        printcards(11,i,secondB);
                    else if(i==147 && XYZBc!=3)
                        printcards(11,i,thirdB);
                    else if(i==153 && XYZBd!=4)
                        printcards(11,i,fourthB);
                }
             int c;
             gotoRowCol(3,110);
             cout<<"player "<<2<<" which card you want to throw 1,2,3,4 ";
             cin>>c;
              if(c==1)
                XYZBa=c;
             else if(c==2)
                XYZBb=c;
             else if(c==3)
                XYZBc=c;
             else if(c==4)
                XYZBd=c;
              int d=cardidentifierB(firstB,secondB,thirdB,fourthB,c);
              int Brdx=0;
              for(int i=0;i<=3;i++)
              {
                  if(marblepositionB[i]==0&&((i==0&&Brdxa==1)||(i==1&&Brdxb==1)||(i==2&&Brdxc==1)||(i==3&&Brdxd==1)))
                    Brdx=1;
              }
             if(d==11&&(Brdx!=1))
             {
                 marblescountB-=1;
                 if(marblescountB>0)
                 {
                      if(marblescountB==3)
                        xyzB=1;
                     else if(marblescountB==2)
                        xyzB=2;
                     else if(marblescountB==1)
                        xyzB=3;
                     else if(marblescountB==0)
                        xyzB=4;
                     placingmarbleB(xyzB);
                      athomeB++;
                       if(athomeB==1)
                         {
                             marblepositionB[0]=0;
                             Brdxa=1;
                         }
                       else if(athomeB==2)
                         {
                             marblepositionB[1]=0;
                             Brdxb=1;
                         }
                       else if(athomeB==3)
                         {
                             marblepositionB[2]=0;
                             Brdxc=1;
                         }
                       else if(athomeB==4)
                         {
                             marblepositionB[3]=0;
                             Brdxd=1;
                         }
                     beforelocationB=0;
                     removestoneB(marblescountB);
                 }
             }

              int qh;
              int hq;
              char plk[3];
             if(d==4&&(marblescountB<=3))
             {
                 int p=1;
                 if(marblescountB<4)
                 {
                     p=questioningB();
                 }

                 int canMove=0;
                 if(p==1&&marblepositionB[0]!=1000)
                     canMove=1;
                 if(p==2&&marblepositionB[1]!=1000)
                     canMove=1;
                 if(p==3&&marblepositionB[2]!=1000)
                     canMove=1;
                 if(p==4&&marblepositionB[3]!=1000)
                     canMove=1;

                 if(canMove==0)
                 {
                     gotoRowCol(5,110);
                     cout<<"This marble is not out yet! Cannot move.";
                     sleep(10000);
                     gotoRowCol(5,110);
                     cout<<"                                           ";
                 }
                 else
                 {
                 int currentPosition;
                 if(p==1)
                     currentPosition=summerBa;
                  if(p==2)
                     currentPosition=summerBb;
                  if(p==3)
                     currentPosition=summerBc;
                  if(p==4)
                     currentPosition=summerBd;

                 for(int step=1;step<=4;step++)
                 {
                     int G=Brow[currentPosition];
                     int H=Bcol[currentPosition];
                     gotoRowCol(G,H);
                     cout<< "  ";

                     currentPosition=currentPosition-1;
                     if(currentPosition<0)
                         currentPosition=currentPosition+52;

                     if(p==1)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='a';
                     }
                     if(p==2)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='b';
                     }
                     if(p==3)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='c';
                     }
                     if(p==4)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='d';
                     }

                     for(int m=0;m<4;m++)
                     {
                         if(marblepositionA[m]==currentPosition && marblepositionA[m]!=0 && currentPosition!=0)
                         {
                             marblescountA++;
                             removestoneA(marblescountA);
                             marblepositionA[m]=1000;
                             if(m==0) summerAa=0;
                             if(m==1) summerAb=0;
                             if(m==2) summerAc=0;
                             if(m==3) summerAd=0;
                             marblesA();
                         }
                     }

                     gotoRowCol(qh,hq);
                     cout<<plk[0]<<plk[1];
                     sleep(5000);
                 }

                 if(p==1)
                 {
                     summerBa=currentPosition;
                     beforelocationB=summerBa;
                     marblepositionB[0]=summerBa;
                 }
                  if(p==2)
                 {
                     summerBb=currentPosition;
                     beforelocationB=summerBb;
                     marblepositionB[1]=summerBb;
                 }
                 if(p==3)
                 {
                     summerBc=currentPosition;
                     beforelocationB=summerBc;
                     marblepositionB[2]=summerBc;
                 }
                 if(p==4)
                 {
                     summerBd=currentPosition;
                     beforelocationB=summerBd;
                     marblepositionB[3]=summerBd;
                 }
                 }

             }
             if((d>=2&&d<=10&&d!=7&&d!=4)&&(marblescountB<=3))
             {
                 int p=1;
                 if(marblescountB<4)
                 {
                     p=questioningB();
                 }

                 int canMove=0;
                 if(p==1&&marblepositionB[0]!=1000)
                     canMove=1;
                 if(p==2&&marblepositionB[1]!=1000)
                     canMove=1;
                 if(p==3&&marblepositionB[2]!=1000)
                     canMove=1;
                 if(p==4&&marblepositionB[3]!=1000)
                     canMove=1;

                 if(canMove==0)
                 {
                     gotoRowCol(5,110);
                     cout<<"This marble is not out yet! Cannot move.";
                     sleep(10000);
                     gotoRowCol(5,110);
                     cout<<"                                           ";
                 }
                 else
                 {
                 int currentPosition;
                 if(p==1)
                     currentPosition=summerBa;
                  if(p==2)
                     currentPosition=summerBb;
                  if(p==3)
                     currentPosition=summerBc;
                  if(p==4)
                     currentPosition=summerBd;

                 for(int step=1;step<=d;step++)
                 {
                     int G=Brow[currentPosition];
                     int H=Bcol[currentPosition];
                     gotoRowCol(G,H);
                     cout<< "  ";

                     currentPosition=currentPosition+1;

                     if(p==1)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='a';
                     }
                     if(p==2)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='b';
                     }
                     if(p==3)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='c';
                     }
                     if(p==4)
                     {
                          qh=Brow[currentPosition];
                          hq=Bcol[currentPosition];
                          plk[0]='B'; plk[1]='d';
                     }

                     for(int m=0;m<4;m++)
                     {
                         if(marblepositionA[m]==currentPosition && marblepositionA[m]!=0 && currentPosition!=0)
                         {
                             marblescountA++;
                             removestoneA(marblescountA);
                             marblepositionA[m]=1000;
                             if(m==0) summerAa=0;
                             if(m==1) summerAb=0;
                             if(m==2) summerAc=0;
                             if(m==3) summerAd=0;
                             marblesA();
                         }
                     }

                     gotoRowCol(qh,hq);
                     cout<<plk[0]<<plk[1];
                     sleep(5000);
                 }

                 if(p==1)
                 {
                     summerBa=currentPosition;
                     beforelocationB=summerBa;
                     marblepositionB[0]=summerBa;
                 }
                  if(p==2)
                 {
                     summerBb=currentPosition;
                     beforelocationB=summerBb;
                     marblepositionB[1]=summerBb;
                 }
                 if(p==3)
                 {
                     summerBc=currentPosition;
                     beforelocationB=summerBc;
                     marblepositionB[2]=summerBc;
                 }
                 if(p==4)
                 {
                     summerBd=currentPosition;
                     beforelocationB=summerBd;
                     marblepositionB[3]=summerBd;
                 }
                 }

             }
        }
    }
}
int main()
{
    boundary();
    center();
    path();
    marblesA();
    marblesB();
    playing();
    getch();
    return 0;
}
