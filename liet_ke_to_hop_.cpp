#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
int d, k, a[1005], b[1005], n, e[1005];

void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << e[b[i]] << " ";
    }
    cout << endl;
}

void sinh(int i)
{
    for (int j = b[i - 1] + 1; j <= d - k + i; j++)
    {
        b[i] = j;
        if (i == k)
            in();
        else
            sinh(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    d = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto i : mp)
    {
        e[d] = i.first;
        d++;
    }
    d--;
    sinh(1);
}