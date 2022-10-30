#include <bits/stdc++.h>
using namespace std;

int ktra(int a[], int n, int k)
{
    int i;
    for (i = 1; i <= n; i++)
        if (a[i] == k)
            return i;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        if (ktra(a, n, k) != 0)
            cout << ktra(a, n, k);
        else
            cout << "NO";
        cout << endl;
    }
}
