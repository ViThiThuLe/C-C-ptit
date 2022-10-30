#include <bits/stdc++.h>
using namespace std;

void nhap(long long n, long long a[])
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void tich()
{
    long long n, m;
    cin >> n >> m;
    long long a[n], b[m];
    nhap(n, a);
    nhap(m, b);
    sort(a, a + n);
    sort(b, b + m);
    cout << (long long)a[n - 1] * b[0] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tich();
    }
}
