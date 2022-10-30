#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        ;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((a[i] != 0 && a[j] != 0 && a[k] != 0) && (a[i] * a[i] == a[j] * a[j] + a[k] * a[k] ||
                                                                  a[j] * a[j] == a[i] * a[i] + a[k] * a[k] ||
                                                                  a[k] * a[k] == a[j] * a[j] + a[i] * a[i]))
                        m = 1;
                }
            }
        }
        if (m == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}