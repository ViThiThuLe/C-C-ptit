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
        int k;
        cin >> k;
        cin.ignore();
        int b[1000] = {0};
        int n = s.length();
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            b[s[i]] = 1;
        }
        for (int i = 'a'; i < 'z'; i++)
        {
            if (b[i] == 0)
                dem++;
        }
        if (dem <= k)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}