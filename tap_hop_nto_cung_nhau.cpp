#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, a, b, c;
        cin >> n >> m;
        a = n * (n + 1) / 2;
        if (a < m)
            cout << "No";
        else
        {
            b = (a + m) / 2;
            c = a - b;
            if (__gcd(c, b) == 1 && abs(c - b) == m)
                cout << "Yes";
            else
                cout << "No";
        }
        cout << endl;
    }
}