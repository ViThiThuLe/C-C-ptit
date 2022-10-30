#include <bits/stdc++.h>
using namespace std;

void ktra(int n, int m)
{
    string a;
    for (int i = 0; i < m; i++)
    {
        a[i] = n % 2;
        if (a[i] == 1)
            a[i] = '8';
        else
            a[i] = '6';
        n /= 2;
    }
    int check;
    for (int i = m - 1; i >= 0; i--)
    {
        if (a[m - 1] == '8' && a[0] == '6')
        {
            if (a[i] == '8' && a[i + 1] == '8')
            {
                check = 0;
                break;
            }
            else if (a[i] == '6' && a[i + 1] == '6' && a[i + 2] == '6' && a[i + 3] == '6')
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
    int n;
    cin >> n;
    int a = pow(2, n);
    for (int i = 0; i < a; i++)
    {
        ktra(i, n);
    }
}