#include <bits/stdc++.h>
using namespace std;

string hieu(string a, string b)
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
        int s = int(a[i] - '0') - int(b[i] - '0') - nho;
        if (s < 0)
        {
            c = char(s + 10 + '0') + c;
            nho = 1;
        }
        else
        {
            c = char(s + '0') + c;
            nho = 0;
        }
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
        cout << hieu(a, b);
        cout << endl;
    }
}