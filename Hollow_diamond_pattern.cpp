#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "ENter No. of rows" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if ((i + j) == (n - 1))
            {
                cout << "*";
            }
            else if (j == (i + n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (i == j)
            {
                cout <<" "<< "*";
            }
            else if (j == ((2 * n) - 2 - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}