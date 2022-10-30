#include <bits/stdc++.h>
using namespace std;

int kt(int a[], int b[], int n, int m)
{
    int s = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        t += a[i];
        int k = 0;
        for (int j = i + 1; j < m; j++)
        {
            k += b[j];
        }
        if (k + t > s)
            s = k + t;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int s1 = kt(a, b, n, m),
            s2 = kt(b, a, m, n);
        if (s1 < s2)
            swap(s1, s2);
        cout << s1 << endl;
    }
}