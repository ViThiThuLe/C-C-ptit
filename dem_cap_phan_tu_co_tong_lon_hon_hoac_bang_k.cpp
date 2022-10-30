#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long d = 0;
        for (int i = 0; i < n; i++)
        {
            long long x = k - a[i];
            long long y = lower_bound(a + i + 1, a + n, x) - a;
            long long b = n - y;
            if (b >= 1)
                d += b;
        }
        cout << d << endl;
        ;
    }
}