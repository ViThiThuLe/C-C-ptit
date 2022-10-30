#include <bits/stdc++.h>
using namespace std;

int n, x;
int ss(int a, int b)
{
    return abs(x - a) < abs(x - b);
}

void sapxep()
{
    cin >> n >> x;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stable_sort(a, a + n, ss);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sapxep();
    }
}
