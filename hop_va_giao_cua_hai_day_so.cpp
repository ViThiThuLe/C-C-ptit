#include <bits/stdc++.h>
using namespace std;

void hopvagiao(int n, int m, int a[], int b[])
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++;
    for (int i = 0; i < m; i++)
        mp[b[i]]++;
    for (auto i : mp)
        cout << i.first << " ";
    cout << endl;
    for (auto i : mp)
        if (i.second == 2)
            cout << i.first << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        hopvagiao(n, m, a, b);
        cout << endl;
    }
}