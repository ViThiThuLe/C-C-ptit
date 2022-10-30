#include <bits/stdc++.h>
using namespace std;
string s;
int a[100], check[100];

void xuat()
{
    for (int i = 0; i < s.size(); i++)
        cout << s[a[i]];
    cout << " ";
}

void hoanvi(int i)
{
    for (int j = 0; j < s.size(); j++)
    {
        if (check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
            if (i == s.size() - 1)
                xuat();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        hoanvi(0);
        cout << endl;
    }
}
