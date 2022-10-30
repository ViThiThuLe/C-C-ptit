#include <bits/stdc++.h>
using namespace std;

int kt1(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < s[i - 1])
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.length() - 1, k = 0;
        int max = 0, m = 0;
        if (s[0] == 0)
        {
            cout << "-1";
            break;
        }
        else
        {
            if (kt1(s) == 0)
            {
                cout << -1 << endl;
                continue;
            }
            for (int i = n; i >= 1; i--)
            {
                if (s[i - 1] > s[i])
                {
                    n = i;
                    break;
                }
            }
            k = n;
            char ma = s[n];
            for (int i = n + 1; i < s.length(); i++)
            {
                if (s[i] > ma && s[i] < s[n - 1])
                {
                    k = i;
                    ma = s[i];
                }
            }
            swap(s[n - 1], s[k]);
            cout << s;
        }
        cout << endl;
    }
}