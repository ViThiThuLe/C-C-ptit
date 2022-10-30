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
        int a[100];
        int k = 0, n = s.length();
        int tong = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] > s[j])
                    swap(s[i], s[j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] < '0' || s[i] > '9')
                cout << s[i];
            else if (s[i] > '0' && s[i] <= '9')
            {
                a[k] = s[i] - '0';
                k++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            tong += a[i];
        }
        cout << tong << endl;
    }
}