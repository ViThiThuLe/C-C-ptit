#include <bits/stdc++.h>
using namespace std;

long long GT(int n)
{
    if (n == 0)
        return 1;
    else
        return n * GT(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << GT(n) << endl;
    }
}
