#include <bits/stdc++.h>
using namespace std;

long long ucln(long long a, long long b)
{
    while (b != 0)
    {
        int m = a % b;
        a = b;
        b = m;
    }
    return a;
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
        long long k = 1000000007;
        long long b, h = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long g = a[0];
        for (int i = 0; i < n; i++)
        {
            h = ((h % k) * (a[i] % k)) % k;
            g = ucln(g, a[i]);
        }
        for (int i = 1; i < g; i++)
        {
            b = (h * h) % k;
        }
        cout << b << endl;
    }
}
