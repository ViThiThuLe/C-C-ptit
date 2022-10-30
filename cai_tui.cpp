#include <bits/stdc++.h>
using namespace std;

int kl[1001], gt[1001];
int c[1001][1001];

void caitui(int kl[], int gt[], int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 0 || j == 0)
                c[i][j] = 0;
            else if (j < kl[i])
                c[i][j] = c[i - 1][j];
            else
                c[i][j] = max(c[i - 1][j], gt[i] + c[i - 1][j - kl[i]]);
        }
    }
    cout << c[n][m] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> kl[i];
        for (int i = 1; i <= n; i++)
            cin >> gt[i];
        caitui(kl, gt, n, m);
    }
}
