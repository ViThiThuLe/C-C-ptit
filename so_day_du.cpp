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
        int dem = 0, k = 0;
        if (s[0] == '0')
            cout << "INVALID";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] < '0' || s[i] > '9')
                {
                    cout << "INVALID";
                    k = 1;
                    break;
                }
                if (k == 0)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (s[j] < s[i])
                        {
                            swap(s[i], s[j]);
                        }
                    }
                }
            }
            if (k == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != s[i + 1])
                        dem++;
                }
                if (dem == 10)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }
}
