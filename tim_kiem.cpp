#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == x)
                m = 1;
        }
        if (m == 1)
            cout << "1";
        else
            cout << "-1";
        cout << endl;
    }
}
