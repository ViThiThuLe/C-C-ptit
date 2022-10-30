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
        int a[n][m];
        int x = n, y = m, h = 0, k = 0;
        int b[m * n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        while (k < m * n)
        {
            for (int i = h; i < y; i++)

                b[k++] = a[h][i];
            for (int i = h + 1; i < x; i++)
                b[k++] = a[i][y - 1];
            for (int i = y - 2; i >= h; i--)
                b[k++] = a[x - 1][i];
            for (int i = x - 2; i > h; i--)
                b[k++] = a[i][h];
            h++;
            x--;
            y--;
        }
        for (int i = 0; i < m * n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}