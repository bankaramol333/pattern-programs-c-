#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter No. of rows" << endl;
    cin >> n;
    int k = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << k << " ";
            k--;
        }
        cout << endl;
    }
    return 0;
}