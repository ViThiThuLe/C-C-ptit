#include <bits/stdc++.h>
using namespace std;

long long ucln(long long a, long long b)
{
    while (b != 0)
    {
        int m = a % b;
        a = b;
        b = m;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, m = 0;
        cin >> a;
        string b;
        cin >> b;
        for (int i = 0; i < b.length(); i++)
        {
            m = (m * 10 + b[i] - '0') % a;
        }
        cout << ucln(a, m) << endl;
    }
}
