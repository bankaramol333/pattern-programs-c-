#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter No. of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        int x = 1;

        for (int k = 1; k <= i; k++)
        {
            cout << x << " ";
            x = x * (i - k) / k;
        }
        cout << endl;
    }

    return 0;
}