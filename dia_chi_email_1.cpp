#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    string a[100];
    int k = 0;
    stringstream s1(s);
    while (s1 >> a[k])
    {
        k++;
    }
    for (int i = 0; i < k - 1; i++)
    {
        cout << a[i][0];
    }
    cout << a[k - 1];
    cout << "@ptit.edu.vn";
}
