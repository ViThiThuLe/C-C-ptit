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
        char s2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        string s;
        getline(cin, s);
        int n = s.length();
        string a[100];
        int k = 0;
        stringstream ss(s);
        while (ss >> a[k])
            k++;
        int dem = 0;
        if (a[0][2] == '1')
        {
            for (int i = 1; i <= 15; i++)
            {
                if (a[i][0] == s1[i - 1])
                    dem++;
            }
        }
        else
        {

            for (int i = 1; i <= 15; i++)
            {
                if (a[i][0] == s2[i - 1])
                    dem++;
            }
        }
        cout << setprecision(2) << fixed << (float)dem * 10 / 15;
        cout << endl;
    }
}