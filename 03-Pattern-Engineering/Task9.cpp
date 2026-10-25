#include <iostream>
using namespace std;

int main() 
{
    char a;
    int b;
    cout << "Enter the Character you want to print: ";
    cin >> a;
    cout << "Enter the Number of Lines you want to print: ";
    cin >> b;
    for (int c = b; c >= 1; c--)
        {
            for (int d = 1; d <=c; d++)
             {
            cout << a;
             }
        for (int e = 1; e <= (b - c) * 2; e++) 
        {
            cout << " ";
        }

        for (int d = 1; d <= c; d++) {
            cout << a;
        }

        cout << endl;
    }

    return 0;
}

