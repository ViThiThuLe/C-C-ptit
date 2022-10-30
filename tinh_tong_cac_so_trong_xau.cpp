#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.length();
        int tong = 0, gt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                gt = gt * 10 + (s[i] - '0');
            }
            else if (gt != 0)
            {
                tong += gt;
                gt = 0;
            }
        }
        cout << tong + gt << endl;
    }
}