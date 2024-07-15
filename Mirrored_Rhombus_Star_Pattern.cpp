#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i + n - 1; j++)
        {
            if (j < i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}