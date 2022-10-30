#include <bits/stdc++.h>
using namespace std;
int check(int a[][1000], int n, int m, int hang, int cot)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i][cot] == 1)
            return 1;
    }
    for (int i = 0; i < m; i++)
    {
        if (a[hang][i] == 1)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][1000];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check(a, n, m, i, j) != 1)
                {
                    a[i][j] = 100;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 100)
                    a[i][j] = 0;
                else
                    a[i][j] = 1;
                cout << a[i][j] << " ";
                if (j == m - 1)
                    cout << endl;
            }
        }
    }
}