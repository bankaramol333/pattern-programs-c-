#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Enter No. of rows" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}