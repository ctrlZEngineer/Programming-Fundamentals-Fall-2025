#include <iostream>
using namespace std;
void Digits_to_Words()
{
    cout<<"Enter a number please: ";
    int a;
    cin>>a;
    if(a>0&&a<=999999)
    {
        {
        int b=0;
        int c;
        int d=a;
        int digitCount=0;
        while(d>0)
        {
            digitCount++;
            d=d/10;
        }
        while(a>0)
        {
            c=a%10;
            b=(b * 10)+c;
            a=a/10;
        }
        d=b;
        int e;
        int printedCount=0;

        while(d>0)
        {
            e=d%10;
            switch(e)
            {
            case 0:
                cout<<"Zero ";
                break;
            case 1:
                cout<<"One ";
                break;
            case 2:
                cout<<"Two ";
                break;
            case 3:
                cout<<"Three ";
                break;
            case 4:
                cout<<"Four ";
                break;
            case 5:
                cout<<"Five ";
                break;
            case 6:
                cout<<"Six ";
                break;
            case 7:
                cout<<"Seven ";
                break;
            case 8:
                cout<<"Eight ";
                break;
            default:
                cout<<"Nine ";
                break;
            }
            printedCount++;
            d=d /10;
        }
        while(printedCount<digitCount)
        {
            cout<<"Zero ";
            printedCount++;
        }
    }
    }
    else
    {
        cout<<"Invalid number.";
    }
}
int main()
{
    Digits_to_Words();
    return 0;
}

