#include <bits/stdc++.h>
using namespace std;

void bosung(int a[], int n)
{
    int dem = a[n - 1] - a[0] + 1;
    dem = dem - n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            dem++;
    }
    cout << dem << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        bosung(a, n);
    }
}
