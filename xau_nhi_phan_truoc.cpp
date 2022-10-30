#include <bits/stdc++.h>
using namespace std;

void ktra(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
        {
            s[i] = '0';
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
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
        cout << endl;
    }
}
