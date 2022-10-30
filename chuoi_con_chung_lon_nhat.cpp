#include <bits/stdc++.h>
using namespace std;

void chuoicon(int n, int a[])
{
    int b[101];
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        b[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                b[i] = max(b[j] + 1, b[i]);
        }
        if (b[i] > k)
            k = b[i];
    }
    cout << k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        chuoicon(n, a);
    }
}
