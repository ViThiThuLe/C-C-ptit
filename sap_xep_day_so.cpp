#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1], MAX = -1000000000;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            MAX = max(MAX, a[i]);
        }
        int j = 0;
        while (a[j] != MAX)
            j++;
        for (int i = n; i > j; i--)
        {
            a[i] = a[i - 1];
        }
        a[j] = m;
        for (int i = 0; i <= n; i++)
        {
            if (a[i] < 0)
                cout << a[i] << " ";
        }
        for (int i = 0; i <= n; i++)
        {
            if (a[i] >= 0)
                cout << a[i] << " ";
        }
        cout << endl;
    }
}