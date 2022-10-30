
#include <bits/stdc++.h>
using namespace std;

char c;
int n, k, a[100];
vector<string> v;

void xuly()
{
    string s = "";
    for (int i = 1; i <= k; i++)
        s += (char)(a[i] + 'A' - 1);
    v.push_back(s);
}

void tohop(int i)
{
    for (int j = i; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
            xuly();
        else
            tohop(j);
    }
}

void in()
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

int main()
{
    cin >> c >> k;
    n = c - 'A' + 1;
    tohop(1);
    in();
}