#include <bits/stdc++.h>
using namespace std;

void ktra(int n, int m)
{
    int a[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = n % 2;
        n /= 2;
    }
    int k = 1, i = 0;
    for (int j = m - 1; j >= 0; j--)
    {
        if (a[j] != a[i])
        {
            k = 0;
            break;
        }
        i++;
    }
    if (k == 1)
    {
        for (int j = m - 1; j >= 0; j--)
            cout << a[j] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a = pow(2, n);
    for (int i = 0; i < a; i++)
    {
        ktra(i, n);
    }
    cout << endl;
}