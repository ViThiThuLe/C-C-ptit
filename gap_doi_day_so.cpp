#include <bits/stdc++.h>
using namespace std;

// 2
// n = 3, k = 2
// => day sau bien doi: 1 2 1 3 1 2 1
// -> so tim duoc = 2
long long n, k;

long long timK(long long n, long long k, int i)
{
    if (k % 2 == 1)
        return i;
    else
        return timK(n, k / 2, i + 1);
}

void duyet()
{
    cin >> n >> k;
    cout << timK(n, k, 1) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        duyet();
    }
}
