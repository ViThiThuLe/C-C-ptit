#include <bits/stdc++.h>
using namespace std;

void ktra()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    map<int, int> mp;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int i = k, dem = 0;
    while (i > 0 && a[i] == n - k + i)
        i -= 1;
    if (i <= 0)
        cout << k << endl;
    else
    {
        a[i] += 1;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        for (int i = 1; i <= k; i++)
            mp[a[i]]++;
        for (auto i : mp)
            if (i.second == 2)
                dem++;
        cout << k - dem << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra();
    }
}
