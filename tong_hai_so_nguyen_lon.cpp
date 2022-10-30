#include <bits/stdc++.h>
using namespace std;

string tong(string a, string b)
{
    string c;
    int nho = 0;
    while (a.size() < b.size())
        a = "0" + a;
    while (a.size() > b.size())
        b = "0" + b;
    if (a < b)
        swap(a, b);
    int n = a.size() - 1;
    for (int i = n; i >= 0; i--)
    {
        int s = int(a[i] - '0') + int(b[i] - '0') + nho;

        nho = s / 10;
        c = char(s % 10 + '0') + c;
        if (nho > 0 && i == 0)
            c = "1" + c;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << tong(a, b);
        cout << endl;
    }
}