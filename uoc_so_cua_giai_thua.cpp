#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x = 0;
        cin >> n >> p;
        for (int i = 1; i <= n; i++)
        {
            int a = i;
            while (a % p == 0)
            {
                a /= p;
                x++;
            }
        }
        cout << x << endl;
    }
}