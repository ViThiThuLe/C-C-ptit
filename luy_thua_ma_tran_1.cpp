#include <bits/stdc++.h>
using namespace std;

//(a+b) % i = (a%i + b%i) %i;
// NOTE TRANH WA
//(a*b* c * d) % i = (a*b % i * c % i * d) %i
int n;
long long k;
long long mod = 1e9 + 7;

struct matran
{
    long long A[15][15] = {};
};

matran nhan(matran a, matran b)
{
    matran c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c.A[i][j] = (c.A[i][j] % mod + (a.A[i][k]) % mod * (b.A[k][j]) % mod) % mod;
            }
        }
    }
    return c;
}

matran luythuamatran(matran a, long long k)
{
    matran tmp;
    if (k == 1)
        return a;
    if (k % 2 == 0)
    {
        tmp = luythuamatran(a, k / 2);
        return nhan(tmp, tmp);
    }
    else
    {
        tmp = luythuamatran(a, k / 2);
        return nhan(nhan(tmp, tmp), a);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        matran a;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a.A[i][j];

        matran ans = luythuamatran(a, k);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans.A[i][j] << " ";
            }
            cout << endl;
        }
    }
}
