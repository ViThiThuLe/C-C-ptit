// hàm tính ước chung lớn nhất của 2 số " __gcd(a,b)"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, x, y, b;
        cin >> a >> x >> y;
        b = __gcd(x, y);
        for (int i = 1; i <= b; i++)
        {
            cout << a;
        }
        cout << endl;
    }
}