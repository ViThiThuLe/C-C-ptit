#include <bits/stdc++.h>
using namespace std;

void ktra(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            s.erase(s.begin() + i);
            i--;
        }
    }
    if (s[0] == '8' && s[1] == '4')
    {
        s.erase(s.begin() + 0);
        s.erase(s.begin() + 0);
        s.insert(s.begin(), '0');
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        ktra(s);
        cout << s << endl;
    }
}