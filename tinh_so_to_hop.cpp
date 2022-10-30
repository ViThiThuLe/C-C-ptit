#include <bits/stdc++.h>
using namespace std;

long long a[1001][1001];
long long p = pow(10, 9) + 7;

void tinhsotohop(int n, int k)
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
            {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
                a[i][j] %= p;
            }
        }
    }
    cout << a[n][k] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        tinhsotohop(n, k);
    }
}
