#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                s[i] = '0';
            else
            {
                s[i] = '1';
                break;
            }
        }
        for (int i = 0; i < s.size(); i++)
            cout << s[i];
        cout << endl;
    }
}
