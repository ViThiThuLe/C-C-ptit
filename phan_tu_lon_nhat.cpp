#include <bits/stdc++.h>
using namespace std;

void lonnhat(int a[], int n, int k)
{
    sort(a, a + n);
    int dem = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (dem > k)
            break;
        else
            cout << a[i] << " ";
        dem++;
    }
    cout << endl;
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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        lonnhat(a, n, k);
    }
}
