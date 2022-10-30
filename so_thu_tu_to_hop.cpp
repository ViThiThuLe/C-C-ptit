#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], stt;

bool check()
{
    for (int i = 1; i <= k; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

void out()
{
    cout << stt << endl;
}

void tohop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            stt++;
            {
                if (check())
                {
                    out();
                    break;
                }
            }
        }
        else
            tohop(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> b[i];
        stt = 0;
        tohop(1);
    }
}