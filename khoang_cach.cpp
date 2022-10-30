#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a1, a2, b1, b2, d;
        cin >> a1 >> b1 >> a2 >> b2;
        d = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
        cout << setprecision(4) << fixed << d << endl;
    }
}