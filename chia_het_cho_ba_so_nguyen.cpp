#include <bits/stdc++.h>
using namespace std;

long long mu(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long x = mu(a, b / 2);
    if (b % 2 == 1)
        return (x * x * a);
    return (x * x);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long a, b, c, d, bc, e, f;
        a = x * y / (__gcd(x, y));
        bc = a * z / (__gcd(a, z));
        c = mu(10, n - 1);
        e = ((c / bc) + 1) * bc;
        f = (c / bc) * bc;
        if (bc < mu(10, n))
        {
            if (c % bc == 0)
                cout << f << endl;
            else
                cout << e << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}