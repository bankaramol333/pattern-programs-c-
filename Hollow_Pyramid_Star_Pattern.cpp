#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + i; j++)
        {
            if (i + j == (n - 1) || j > (n + i - 2))
            {
                cout << "*";
            }
            else if (i == (n - 1))
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