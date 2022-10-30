#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    if (s.size() > 3)
        return 0;
    if (s.size() == 3 && s > "255")
        return 0;
    return 1;
}
void xuat(int k)
{
    if (k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

void ktra(string &s)
{
    int n = 0, j = 0, kt = 1, dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            s[i] = ' ';
            dem++;
            continue;
        }
        if (s[i] < '0' || s[i] > '9')
        {
            kt = 0;
            break;
        }
    }
    if (dem != 3)
        kt = 0;
    dem = 0;
    string k;
    stringstream a(s);
    while (a >> k)
    {
        if (check(k))
            dem++;
        else
            kt = 0;
    }
    if (dem != 4)
        kt = 0;
    xuat(kt);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ktra(s);
    }
}
