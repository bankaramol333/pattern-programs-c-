#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}