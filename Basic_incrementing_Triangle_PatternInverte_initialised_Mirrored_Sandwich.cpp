#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter No. of rows" << endl;
    cin >> n;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        int x = n - i;
        k = k - x;
        for (int j = 0; j < n - i; j++)
        {
            cout << k << " ";
            k++;
        }
        k = k - x;
        cout << endl;
    }
    return 0;
}