#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] < a[i - 1])
                break;
        }
        for (int j = n - 1; j >= i; j--)
            if (a[i - 1] > a[j])
            {
                swap(a[i - 1], a[j]);
                sort(a + i, a + n, greater<int>());
                break;
            }
        for (int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}