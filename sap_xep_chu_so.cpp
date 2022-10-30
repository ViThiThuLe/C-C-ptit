#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n + 5];
        vector<int> b;
        for (int i = 0; i < 10; i++)
        {
            b.push_back(-1);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].length(); j++)
            {
                b[a[i][j] - '0'] = a[i][j] - '0';
            }
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < 10; i++)
        {
            if (b[i] >= 0)
            {
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}