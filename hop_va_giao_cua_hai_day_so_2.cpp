#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + m];
        map<int, int> mp;
        for (int i = 0; i < n + m; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto i : mp)
            cout << i.first << " ";
        cout << endl;
        for (auto i : mp)
        {
            if (i.second == 2)
                cout << i.first << " ";
        }
        cout << endl;
    }
}