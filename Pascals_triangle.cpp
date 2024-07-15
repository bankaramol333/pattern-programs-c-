#include <bits/stdc++.h>
using namespace std;

void printColoredNumber(int number, const string &colorCode) {
    cout << colorCode << number << "\033[0m ";
}

int main() {
    int n;
    cout << "Enter No. of n" << endl;
    cin >> n;

    const string colors[] = {
        "\033[31m", // Red
        "\033[32m", // Green
        "\033[33m", // Yellow
        "\033[34m", // Blue
        "\033[35m", // Magenta
        "\033[36m", // Cyan
        "\033[91m", // Bright Red
        "\033[92m", // Bright Green
        "\033[93m", // Bright Yellow
        "\033[94m", // Bright Blue
    };

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        int x = 1;
        for (int k = 1; k <= i; k++) {
            // Printing by aplying colors
            printColoredNumber(x, colors[k % 10]);
            x = x * (i - k) / k;
        }
        cout << endl;
    }

    return 0;
}
