#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0, k = 0;
    cin >> n;
    long long a[n], chan[n], le[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            le[m++] = a[i];
        else
            chan[k++] = a[i];
    }
    sort(le, le + m);
    sort(chan, chan + k, greater<int>());
    for (int i = 0; i < n / 2; i++)
    {
        cout << le[i] << " " << chan[i] << " ";
    }
    if (n % 2)
        cout << le[n / 2];
    cout << endl;
}
