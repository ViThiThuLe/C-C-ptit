#include <bits/stdc++.h>
using namespace std;

long long x[95] = {};

char ktra(int n, int k)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k <= x[n - 2])
        return ktra(n - 2, k);
    else
        return ktra(n - 1, k - x[n - 2]);
}

void duyet()
{
    int n, k;
    cin >> n >> k;
    x[1] = 0;
    x[2] = 1;
    for (int i = 3; i <= 93; i++)
        x[i] = x[i - 2] + x[i - 1];
    cout << ktra(n, k) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        duyet();
    }
}
