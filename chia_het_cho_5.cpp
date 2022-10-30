#include <bits/stdc++.h>
using namespace std;

int tong(string s)
{
    long long t = 0;
    long long n = s.length();
    for (int i = 0; i < n; i++)
    {
        t = (t % 5 * 2 + (s[i] - '0')) % 5;
    }
    return t;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (tong(s) % 5 == 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}