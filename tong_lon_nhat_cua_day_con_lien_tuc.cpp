// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, m = 0, s = 0;
//         cin >> n;
//         long long a[n];
//         long long k = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] >= 0)
//                 m = 1;
//             else
//             {
//                 if (a[i] > k)
//                     k = a[i];
//             }
//         }
//         if (m == 1)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 s += a[i];
//                 if (s < 0)
//                 {
//                     s = 0;
//                     continue;
//                 }
//                 k = max(k, s);
//             }
//         }
//         cout << k << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n + 5], f[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        f[1] = a[1];
        for (int i = 2; i <= n; i++)
            f[i] = max(f[i - 1] + a[i], a[i]);
        long long b = f[1];
        for (int i = 1; i <= n; i++)
            b = max(b, f[i]);
        cout << b << endl;
    }
    return 0;
}
