#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = -1e9;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (ans < a[i] + a[j] + a[k])
                    {
                        ans = a[i] + a[j] + a[k];
                    }
                }
            }
        }
        cout << ans << endl;
    }
}