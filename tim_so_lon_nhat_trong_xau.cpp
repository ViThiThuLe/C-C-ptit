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
        int max = 0, gt = 0, tong = 0;
        int a[100], k = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                gt = gt * 10 + (s[i] - '0');
            }
            else if (gt != 0)
            {
                tong += gt;
                if (s[i + 1] <= '0' || s[i + 1] >= '9')
                {
                    a[k] = tong;
                    k++;
                    tong = 0;
                }
                gt = 0;
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (a[i] > max)
                max = a[i];
        }
        cout << max << endl;
    }
}