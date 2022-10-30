#include <bits/stdc++.h>
using namespace std;

bool kt(string a, string b)
{
    string ab = a + b;
    string ba = b + a;
    if (ab.compare(ba) > 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n, kt);
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}