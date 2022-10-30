#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[205] = {0};
    int n;
    cin >> n;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        a[j] = 1;
        m = max(j, m);
    }
    int kt = 1;
    for (int i = 1; i <= m; i++)
    {
        if (a[i] == 0)
        {
            kt = 0;
            cout << i << endl;
        }
    }
    if (kt == 1)
        cout << "Excellent!";
}