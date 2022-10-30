#include <bits/stdc++.h>
using namespace std;
long long x = 1e9 + 7;

void timmax(int a[], int n)
{
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
        max += a[i] * i;
        max %= x;
    }
    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        timmax(a, n);
    }
}
