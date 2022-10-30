#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[50], s = 0, i = 0;
    a[2] = 20000;
    a[5] = 10000;
    a[7] = 15000;
    a[29] = 50000;
    a[45] = 70000;
    map<string, long> m;
    string b[100];
    int n;
    cin >> n;
    while (n--)
    {
        int t, kt = 1;
        string x;
        cin >> x;
        cin >> x;
        cin >> t;
        cin >> x;
        if (x == "OUT")
        {
            kt = 0;
        }
        cin >> x;
        if (kt == 1)
            m[x] += a[t];
        if (s < m.size())
        {
            b[i++] = x;
            s = m.size();
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << b[j] << ": " << m[b[j]] << endl;
    }
}
