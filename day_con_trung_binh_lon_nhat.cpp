#include <bits/stdc++.h>
using namespace std;

void daycontrungbinhmax(int n, int k, int a[])
{
    int s = 0, l, r;
    for (int i = 0; i < k; i++)
        s += a[i];
    int mx = s;
    for (int i = 0, j = k; j < n; j++, i++)
    {
        s = s - a[i] + a[j];
        if (s > mx)
        {
            mx = s;
            l = i + 1;
            r = j;
        }
    }
    for (int i = l; i <= r; i++)
        cout << a[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        daycontrungbinhmax(n, k, a);
        cout << endl;
    }
}