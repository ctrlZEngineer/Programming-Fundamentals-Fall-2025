#include <iostream>
using namespace std;
int main()
{
    char A;
    cout<<"Enter the character you want to print: ";
    cin>>A;
    int a;
    cout<<"Enter the number of rows you want to print: ";
    cin>>a;
    for(int b = 0;b <= a;b++)
        {
        cout << A << A;
        }
    cout<<A << endl;
    for (int c = 1; c <= a; c++)
        {
        cout << A;
        for (int d = 0; d < a - c; d++)
         {
            cout << " ";
         }
        cout << A;
        for (int d = 0; d < (c * 2) - 1; d++)
         {
            cout << " ";
         }
        cout << A;
        for (int d = 0; d < a - c; d++)
        {
            cout << " ";
        }
        cout << A;
        cout << endl;
    }
    for (int c = a; c >= 1; c--) {
        cout << A;
        for (int d = 0; d < a - c; d++) {
            cout << " ";
        }
        cout << A;
        for (int d = 0; d < (c * 2) - 1; d++) {
            cout << " ";
        }
        cout << A;
        for (int d = 0; d < a - c; d++) {
            cout << " ";
        }
        cout << A;
        cout << endl;
    }
    for (int b = 0; b <= a; b++) {
        cout << A << A;
    }
    cout<<A <<endl;
    return 0;
}
