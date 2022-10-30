#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {0};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char b;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            if (b == '1')
                continue;
            if (b == '2' || b == '3' || b == '5' || b == '7')
                a[b - 48]++;
            if (b == '4')
            {
                a[2] += 2;
                a[3]++;
            }
            if (b == '6')
            {
                a[5]++;
                a[3]++;
            }
            if (b == '8')
            {
                a[7]++;
                a[2] += 3;
            }
            if (b == '9')
            {
                a[7]++;
                a[3] += 2;
                a[2]++;
            }
        }
        for (int i = 9; i > 1; i--)
        {
            while (a[i] > 0)
            {
                cout << i;
                a[i]--;
            }
        }
        cout << endl;
    }
}