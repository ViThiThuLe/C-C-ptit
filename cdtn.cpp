#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char s1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        //   int d1 = s1.length();
        char s2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        //   int d2 = s2.length();
        int a;
        cin >> a;
        string s;
        getline(cin, s);
        //  cin.ignore();
        int n = s.length();
        if (a == 101)
        {
            int dem = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    if (s[i] != s1[j] &&i = j + 1)
                        dem++;
                }
            }
            cout << setprecision(2) << fixed << 10 - 0.66 * dem << endl;
        }
        else
        {
            int dem = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    if (s[i] != s2[j] &&i = j + 1)
                        dem++;
                }
            }
            cout << setprecision(2) << fixed << 10 - 0.66 * dem << endl;
        }
    }
}
