#include <bits/stdc++.h>
using namespace std;

void hoan_vi_ke_tiep(int n, int a[])
{
    next_permutation(a, a + n);
    for (int i = 0; i < n; i++)
        cout
            << a[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1005];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        hoan_vi_ke_tiep(n, a);
        cout << endl;
    }
}
