#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    int a[b + 1], c[n + 1];
    for (int i = 1; i <= n; i++)
        c[i] = 1;
    for (int i = 1; i <= b; i++)
    {
        cin >> a[i];
        c[a[i]] = 0;
    }
    int t = 0;
    for (int i = 1; i <= k; i++)
        t += c[i];
    int MIN = t;
    for (int i = 1, j = k; j < n; j++, i++)
    {
        t = t - c[i] + c[j + 1];
        MIN = min(k - t, MIN);
    }
    cout << MIN;
}