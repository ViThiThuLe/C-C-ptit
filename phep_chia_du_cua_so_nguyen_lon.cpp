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
        long long b, m = 0;
        cin >> b;
        for (int i = 0; i < a.length(); i++)
        {
            m = (m * 10 + a[i] - '0') % b;
        }
        cout << m << endl;
    }
}
