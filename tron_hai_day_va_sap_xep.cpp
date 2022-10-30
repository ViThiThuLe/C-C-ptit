#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void tron(int a[], int b[], int n, int m)
{
    int k = m + n;
    int c[k];
    for (int i = 0; i < k; i++)
    {
        if (i < n)
            c[i] = a[i];
        else
            c[i] = b[i - n];
    }
    sort(c, c + k);
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
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
        nhap(a, n);
        nhap(b, m);
        tron(a, b, n, m);
    }
}