#include <bits/stdc++.h>

using namespace std;
int S, cnt;
int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void doitien()
{
    cin >> S;
    cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cnt += S / a[i];
        S %= a[i];
    }
    cout << cnt << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        doitien();
    return 0;
}