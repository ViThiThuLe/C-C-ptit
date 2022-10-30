#include <bits/stdc++.h>
using namespace std;

void ktra(int n, int m)
{
    string a;
    for (int i = 0; i < m; i++)
    {
        a[i] = n % 2;
        if (a[i] == 1)
            a[i] = 'H';
        else
            a[i] = 'A';
        n /= 2;
    }
    int check;
    for (int i = m - 1; i >= 0; i--)
    {
        if (a[m - 1] == 'H' && a[0] == 'A')
        {
            if (a[i] == 'H' && a[i + 1] == 'H')
            {
                check = 0;
                break;
            }
            else
                check = 1;
        }
        else
            check = 0;
    }
    if (check == 1)
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
        cin >> n;
        int a = pow(2, n);
        for (int i = 0; i < a; i++)
        {
            ktra(i, n);
        }
    }
}