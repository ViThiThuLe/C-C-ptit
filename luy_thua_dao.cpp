#include <bits/stdc++.h>
using namespace std;
long long x = 1e9 + 7;

long long mu1(long long a)
{
    return (a * a) % x;
}

long long mu2(long long n, long long r)
{
    if (r == 0)
        return 1;
    long long tmp = mu2(n, r / 2);
    if (r % 2 == 0)
        return (mu1(tmp)) % x;
    return (n * (mu1(tmp))) % x;
}

long long dao(long long n)
{
    long long r = 0;
    while (n > 0)
    {
        int m = n % 10;
        r = r * 10 + m;
        n /= 10;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long r = dao(n);
        cout << mu2(n, r) << endl;
    }
}
