#include <bits/stdc++.h>
using namespace std;

int a[100][100], tong = 0, m, n;

void nhiem(int x, int y)
{
    if (x > 0 && y > 0)
    {
        if (a[x - 1][y - 1] != -1)
        {
            tong += a[x - 1][y - 1];
            a[x - 1][y - 1] = 0;
        }
    }
    if (y > 0)
    {
        if (a[x][y - 1] != -1)
        {
            tong += a[x][y - 1];
            a[x][y - 1] = 0;
        }
    }
    if (x < m - 1 && y > 0)
    {
        if (a[x + 1][y - 1] != -1)
        {
            tong += a[x + 1][y - 1];
            a[x + 1][y - 1] = 0;
        }
    }
    if (x < m - 1)
    {
        if (a[x + 1][y] != -1)
        {
            tong += a[x + 1][y];
            a[x + 1][y] = 0;
        }
    }
    if (x < m - 1 && y < n - 1)
    {
        if (a[x + 1][y + 1] != -1)
        {
            tong += a[x + 1][y + 1];
            a[x + 1][y + 1] = 0;
        }
    }
    if (y < n - 1)
    {
        if (a[x][y + 1] != -1)
        {
            tong += a[x][y + 1];
            a[x][y + 1] = 0;
        }
    }
    if (x > 0 && y < n - 1)
    {
        if (a[x - 1][y + 1] != -1)
        {
            tong += a[x - 1][y + 1];
            a[x - 1][y + 1] = 0;
        }
    }
    if (x > 0)
    {
        if (a[x - 1][y] != -1)
        {
            tong += a[x - 1][y];
            a[x - 1][y] = 0;
        }
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == -1)
            {
                nhiem(i, j);
            }
        }
    }
    cout << tong;
}
