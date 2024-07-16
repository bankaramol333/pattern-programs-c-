#include <bits/stdc++.h>
using namespace std;

void printColoredNumber(int number, const string &colorCode)
{
    cout << colorCode << number << "\033[0m ";
}

int main()
{
    int n;
    cout << "Enter No. of n: ";
    cin >> n;

    const string colors[] = {
        "\033[31m",
        "\033[32m",
        "\033[33m",
        "\033[34m",
        "\033[35m",
        "\033[36m",
        "\033[91m",
        "\033[92m",
        "\033[93m",
        "\033[94m",
    };

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        int x = 1;
        for (int k = 0; k < i; k++)
        {
            string colorCode = colors[k % 10];
            printColoredNumber(x, colorCode);
            x = x * (i - k - 1) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
