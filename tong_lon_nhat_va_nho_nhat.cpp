#include <bits/stdc++.h>
using namespace std;

long long ts(long long n)
{
    int m;
    long long a = 0, k = 1;
    while (n > 0)
    {
        m = n % 10;
        if (m == 6)
            m = 5;
        a = a + m * k;
        n /= 10;
        k *= 10;
    }
    return a;
}

long long ts1(long long n)
{
    int m;
    long long a = 0, k = 1;
    while (n > 0)
    {
        m = n % 10;
        if (m == 5)
            m = 6;
        a = a + m * k;
        n /= 10;
        k *= 10;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x1, x2, min = 0, max = 0;
        cin >> x1 >> x2;
        min = ts(x1) + ts(x2);
        max = ts1(x1) + ts1(x2);
        cout << min << " " << max << endl;
    }
}