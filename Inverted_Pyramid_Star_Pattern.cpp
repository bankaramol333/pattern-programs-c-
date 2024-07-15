#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (j >= i && j < ((2 * n) - 1)- i )
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