#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long b, m = 1, M;
        cin >> b >> M;
        for (int i = 0; i < b - 1; i++)
        {
            m = (m % M * (a - '0') % M) % M;
        }
        cout << m << endl;
    }
}