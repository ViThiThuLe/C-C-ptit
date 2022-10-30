#include <bits/stdc++.h>
using namespace std;

int daycontangdainhat(int a[], int n)
{
    int b[n + 5], k;
    for (int i = 0; i < n; i++)
        b[i] = 1;
    k = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
                b[j] = max(b[i] + 1, b[j]);
        }
    }
    for (int i = 0; i < n; i++)
        k = max(k, b[i]);
    return k;
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
        cout << daycontangdainhat(a, n) << endl;
    }
}
