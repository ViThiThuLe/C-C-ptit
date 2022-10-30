#include <bits/stdc++.h>
using namespace std;

int ktra(long long n)
{
    long long s = 1;
    long long a = pow(10, 12);
    if (n > a)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            s += i;
        if (n % (n / i) == 0 && n / i != i)
            s += n / i;
    }
    if (s == n)
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << ktra(n) << endl;
    }
}
