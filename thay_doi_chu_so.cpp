#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string tongBigInt(string a, string b)
{
    string s;
    if (a.length() < b.length())
        swap(a, b);
    int kc = a.length() - b.length();
    if (kc != 0)
        for (int i = 0; i < kc; i++)
            b.insert(0, "0");
    int du = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int t = a[i] + b[i] + du - 96;
        if (t >= 10)
        {
            du = 1;
            t -= 10;
        }
        else
            du = 0;
        s.push_back(t + 48);
    }
    if (du != 0)
        s.push_back('1');
    reverse(s.begin(), s.end());
    return s;
}
string reduce(string a, int p, int q)
{
    char c = p + 48, d = q + 48;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == c)
            a[i] = d;
    }
    string s = a;
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        string x1, x2;
        cin >> p >> q;
        if (p > q)
            swap(p, q);
        cin.ignore();
        cin >> x1 >> x2;
        string max = tongBigInt(reduce(x1, p, q), reduce(x2, p, q));
        string min = tongBigInt(reduce(x1, q, p), reduce(x2, q, p));
        cout << min << " " << max << endl;
    }
}