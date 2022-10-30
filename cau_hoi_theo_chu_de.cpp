#include <bits/stdc++.h>
using namespace std;

void check(int n, string &s)
{
    int ktra = 0, j = 0;
    map<string, int> m;
    string b[100];
    for (int i = 0; i < n; i++)
    {
        string a;
        getline(cin, a);
        if (a == "")
        {
            ktra = 1;
            continue;
        }
        if (i == 0 || ktra == 1)
        {
            s = a;
            b[j++] = a;
            ktra = 0;
        }
        m[s]++;
    }
    for (int i = 0; i < j; i++)
    {
        cout << b[i] << ": " << m[b[i]] - 1 << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> m;
    string s;
    check(n, s);
}
