#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (i == 0 || i == j)
            {
                cout << "*";
            }
            else if (((2 * n) - 2) == i + j)
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