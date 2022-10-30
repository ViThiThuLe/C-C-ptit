#include <bits/stdc++.h>
using namespace std;

void ktra(int a[], int n)
{
    int dem = 0;
    if (a[1] == 1)
        cout << "0" << endl;
    else if (a[n] == 0)
        cout << n << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                dem++;
        }
        cout << dem << endl;
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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ktra(a, n);
    }
}
