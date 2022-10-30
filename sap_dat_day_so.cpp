#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int k;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            k = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    cout << a[j] << " ";
                    k = 1;
                    break;
                }
            }
            if (k == 0)
                cout << "-1"
                     << " ";
        }
        cout << endl;
    }
}