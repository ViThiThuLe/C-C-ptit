#include <bits/stdc++.h>
using namespace std;
long long x = 1e9 + 7;

long long mu1(long long a)
{
    return (a * a) % x;
}

long long mu2(long long a, long long b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long tmp = mu2(a, b / 2);
    if (b % 2 == 0)
        return (mu1(tmp)) % x;
    return (a * (mu1(tmp))) % x;
}

int main()
{
    int t = 1;
    while (1)
    {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        else
            cout << mu2(a, b) << endl;
    }
}
