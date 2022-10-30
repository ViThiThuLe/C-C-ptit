#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    int n;
    cin >> n;
    int a, b;
    char c;
    set<int> se; // set: sap xep va khong p.tu nao trung nhau
    while (n--)
    {
        cin >> a >> b >> c;
        se.insert(a);
        se.insert(b);
    }
    for (auto i : se)
    {
        cout << i << " ";
    }
    cout << endl;
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
