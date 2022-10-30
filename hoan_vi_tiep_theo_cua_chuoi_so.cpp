#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void sinh()
{
    int vt, k = 0;
    for (int i = s.size() - 1; i >= 0; i++)
        if (s[i] > s[i + 1])
        {
            vt = i;
            k++;
            break;
        }
    for (int i = s.size() - 1; i >= 0; i++)
    {
        if (s[i] > s[vt])
        {
            swap(s[i], s[vt]);
            reverse(s.begin() + i + 1, s.end());
            break;
        }
    }
    if (k == 0)
        cout << "BIGGEST" << endl;
    else
        cout << s << endl;
}

void duyet()
{
    cin >> n >> s;
    sinh();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        duyet();
    }
}