#include <bits/stdc++.h>
using namespace std;

void kt(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

int main()
{
    int n;
    cin >> n;
    scanf("\n");
    string s[50];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        kt(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        string a[100];
        int k = 0;
        stringstream s1(s[i]);
        while (s1 >> a[k])
        {
            k++;
        }
        cout << a[k - 1];
        for (int i = 0; i < k - 1; i++)
        {
            cout << a[i][0];
        }
        cout << "@ptit.edu.vn" << endl;
    }
}
