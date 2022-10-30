#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int k = pow(10, 9) + 7;
        long long p = 0, a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            long long s = 1;
            for (int j = n - i - 1; j > 0; j--)
            {
                s = (s * x) % k;
            }
            p += a[i] * s;
        }
        cout << p % k << endl;
    }
}