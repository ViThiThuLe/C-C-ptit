#include <bits/stdc++.h>
using namespace std;

void tong()
{
    int n, k, dem = 0;
    cin >> n >> k;
    int a[n + 5], b[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    while (i < n - 1)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
                dem++;
        }
        i++;
    }
    cout << dem << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tong();
    }
}
