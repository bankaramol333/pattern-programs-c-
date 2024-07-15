#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cout << "Ener No of rows" << endl;
    cin >> n;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k<<" ";
            k++;
        }
        cout << endl;
    }
    return 0;
}