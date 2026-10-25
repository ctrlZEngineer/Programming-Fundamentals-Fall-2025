#include <iostream>

using namespace std;

int main()
 {
    char a;
    cout<<"Enter the character do you want to print :";
    cin>>a;
    int b;
    cout<<"Enter the number of lines you want to print  :";
    cin>>b;
    for (int c = 1;c <= b; c++)
        {
        for (int d = 1; d <= b - c; d++)
        {
            cout << " ";
        }
        for (int e = 1; e <= (2 * c - 1); e++)
         {
            cout << a;
        }
        cout << endl;
    }

    for (int c = b; c >= 1; c--) {
        for (int d = 1; d <= b - c; d++) {
            cout << " ";
        }
        for (int e = 1; e <= (2 * c - 1); e++) {
            cout << a;
        }
        cout << endl;
    }

    return 0;
}
