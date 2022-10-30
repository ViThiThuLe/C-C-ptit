#include <bits/stdc++.h>
using namespace std;
int n, a[100], ck[11], b[100], stt;

bool check()
{
    for (int i = 1; i <= n; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

void out()
{
    cout << stt << endl;
}

void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (ck[j] == 0)
        {
            ck[j] = 1;
            a[i] = j;
            if (i == n)
            {
                stt++;
                if (check())
                {
                    out();
                    break;
                }
            }
            else
                hoanvi(i + 1);
            ck[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        stt = 0;
        memset(ck, 0, sizeof(ck));
        hoanvi(1);
    }
}