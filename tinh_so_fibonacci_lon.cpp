#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0)
            cout << "0" << endl;
        if (n == 1)
            cout << "1" << endl;
        if (n >= 2)
        {
            long long a = 0, b = 1, c = 0;
            long long d = pow(10, 9) + 7;
            for (int i = 2; i <= n; i++)
            {
                c = a % d + b % d;
                a = b;
                b = c;
            }
            cout << c % d << endl;
        }
    }
}