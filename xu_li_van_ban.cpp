#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[20009];
    int x = 0, dem = 0;
    ;
    while (cin >> s[x])
    {
        x++;
        dem++;
        if (dem > 40)
            break;
    }
    int z = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
                s[i][j] += 32;
        if (s[z][0] >= 'a' && s[z][0] <= 'z')
            s[z][0] -= 32;
        if (s[i][s[i].size() - 1] == '.' || s[i][s[i].size() - 1] == '?' || s[i][s[i].size() - 1] == '!')
        {
            s[i].erase(s[i].begin() + s[i].size() - 1);
            z = i + 1;
            cout << s[i] << endl;
        }
        else
            cout << s[i] << " ";
    }
}