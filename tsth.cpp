#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, j;
        cin >> n >> k;
        long long a[1001][1001];
        long long p = 100000007;
        for (i = n; i >= 0; i--)
        {
            for (j = k; j >= 0; j--)
            {
                if (j == 0 || j == i)
                    a[i][j] == 1;

                else
                {
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                    a[i][j] %= p;
                }
            }
        }
        cout << a[i][j] << endl;
    }
}
