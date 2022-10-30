#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];

void out()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void tohop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            out();
        else
            tohop(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        tohop(1);
        cout << endl;
    }
}