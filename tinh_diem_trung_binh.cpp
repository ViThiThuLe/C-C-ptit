#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dem = 0;
    cin >> n;
    double a[n], tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[0] && a[i] != a[n - 1])
        {
            tong += a[i];
            dem++;
        }
    }
    cout << fixed << setprecision(2) << (double)tong / dem;
}