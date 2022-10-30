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
        int a[k][n];
        int b[10000], m = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[m] = a[i][j];
                m++;
            }
        }
        sort(b, b + m);
        for (int i = 0; i < m; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}