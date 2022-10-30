#include <bits/stdc++.h>
using namespace std;
void in()
{
    int n;
    cin >> n;
    int a[n][n];
    int b[100001];
    vector<int> c;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (b[a[i][j]] == i)
            {
                b[a[i][j]] += 1;
            }
            if (b[a[i][j]] == n)
            {
                c.push_back(a[i][j]);
            }
        }
    }
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());
    cout << c.size();
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        in();
        cout << endl;
    }
}