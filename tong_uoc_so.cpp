#include <bits/stdc++.h>
using namespace std;

int ktra(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    int a[n], tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (a[i] > 1)
        {
            tong += ktra(a[i]);
            a[i] /= ktra(a[i]);
        }
    }
    cout << tong;
}