#include <bits/stdc++.h>
using namespace std;
int n, a[100], check[100], b[100];

void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << b[a[i]] << " ";
    cout << endl;
}

void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
            if (i == n)
                xuat();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(b + 1, b + 1 + n);
    hoanvi(1);
}
