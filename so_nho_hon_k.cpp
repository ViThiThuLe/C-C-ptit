#include <bits/stdc++.h>
using namespace std;

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
        int d1 = 0, d2 = 0;
        for (int i = 0; i < n; i++)
            if (a[i] <= k)
                d1++;
        for (int i = 0; i < d1; i++)
            if (a[i] > k)
                d2++;
        int ans = d2;
        for (int i = 0, j = d1; j < n; j++, i++)
        {
            if (a[i] > k)
                d2--;
            if (a[j] > k)
                d2++;
            ans = min(ans, d2);
        }
        cout << ans << endl;
    }
}