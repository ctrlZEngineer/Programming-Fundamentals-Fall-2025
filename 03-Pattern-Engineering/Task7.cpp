#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number of rows for the diamond: ";
    cin >> a;
    int b = a * 2 + 1;
    int B = a;
    for (int c = 0; c <a; c++)
        {
        for (int d = 0; d < B - c; d++)
        {
            cout << " ";
        }
        cout << "*";
        for (int d = 0; d < c; d++)
        {
            cout << " ";
        }
        cout << "+";
        for (int d = 0; d < c; d++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
        }
    for (int d = -1; d <= b; d++)
    {
        cout << "+";
    }
    cout << endl;
    for (int c = a - 1; c >= 0; c--)
    {
        for (int d = 0; d < B - c; d++)
        {
            cout << " ";
        }
        cout << "*";
        for (int d = 0; d < c; d++)
        {
            cout << " ";
        }
        cout << "+";
        for (int d = 0; d < c; d++)
         {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    return 0;
}
