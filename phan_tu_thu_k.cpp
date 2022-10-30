#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    int m, n, k, x = 0;
    cin >> m >> n >> k;
    int a[m], b[n], c[m + n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        c[x] = a[i];
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[x] = b[i];
        x++;
    }
    sort(c, c + x);
    for (int i = 0; i < x; i++)
    {
        if (i == k)
        {
            cout << c[i - 1] << endl;
            break;
        }
    }
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
