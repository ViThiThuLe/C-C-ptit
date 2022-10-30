

#include <bits/stdc++.h>
using namespace std;
long long len[95] = {};
// 1:A
// 2:B
// 3:A/B //i=1
// 4:B/AB //i=2
// 5:AB/BAB
// 6:BAB/ABBAB
// f[n] = f[n-2] + f[n-1]
// i:1,2,3
char ans(int n, long long i) // n: thu tu xau, i:vi tri cua xau thu n
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    // if i thuoc nua dau
    if (i <= len[n - 2])
    {
        // day la nua dau cua xau thu n-2
        return ans(n - 2, i);
    }
    else
    {
        // day la nua sau cua xau thu n-1
        return ans(n - 1, i - len[n - 2]);
    }
}
int main()
{

    len[1] = len[2] = 1;
    for (int i = 3; i <= 93; i++)
    {
        len[i] = len[i - 1] + len[i - 2];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long i;
        cin >> n >> i;
        cout << ans(n, i) << '\n';
    }
}
