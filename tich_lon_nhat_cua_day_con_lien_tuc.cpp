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
        int a[n], b[n];
        long long s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        b[0] = a[0];
        s = a[0];
        for (int i = 0; i < n; i++)
        {
            int k = a[i];
            for (int j = i + 1; j < n; j++)
            {
                k = k * a[j];
                b[i] = max(k, b[i]);
            }
            s = max(s, b[i]);
        }
        cout << s << endl;
    }
}
