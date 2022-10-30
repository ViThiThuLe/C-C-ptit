#include <bits/stdc++.h>
using namespace std;

void tong(int a[], int n)
{
    long long t1 = 0, t2 = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            t1 = t1 * 10 + a[i];
        else
            t2 = t2 * 10 + a[i];
    }
    cout << t1 + t2 << endl;
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
        tong(a, n);
    }
}
