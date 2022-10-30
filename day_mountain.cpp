#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            for (int j = i + 1; j <= r; j++)
            {
                if (a[i] > a[j])
                {
                    for (int h = j; h <= r; h++)
                    {
                        if (a[h] > a[j])
                        {
                            k = 1;
                        }
                    }
                }
            }
            if (k == 1)
            {
                cout << "No";
                break;
            }
        }
        if (k == 0)
            cout << "Yes";
        cout << endl;
    }
}