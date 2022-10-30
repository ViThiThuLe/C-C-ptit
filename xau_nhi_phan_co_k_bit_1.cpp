#include <bits/stdc++.h>
using namespace std;

int k;
void ktra(int n, int m)
{
    int a[m], dem = 0;
    for (int i = 0; i < m; i++)
    {
        a[i] = n % 2;
        if (a[i] == 1)
            dem++;
        n /= 2;
    }
    if (dem == k)
    {
        for (int i = m - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> k;
        int a = pow(2, n);
        for (int i = 0; i < a; i++)
        {
            ktra(i, n);
        }
        cout << endl;
    }
}