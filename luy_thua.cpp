#include <bits/stdc++.h>
using namespace std;
//(a+b) % i = (a%i + b%i) %i;
// NOTE TRANH WA
//(a*b* c * d) % i = (a*b % i * c % i * d) %i
const int Mod = 1e9 + 7; //->10^9 + 7
long long luyThua(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    if (k % 2 == 0) // k chia het cho 2
    {
        long long tg = luyThua(n, k / 2) % Mod; // n^5
        return (tg * tg) % Mod;                 // n^10
    }
    else
    {
        long long tg = luyThua(n, k / 2) % Mod; // n^2
        return (tg * tg % Mod * n) % Mod;       // n^5 = n^2*n^2*n
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << luyThua(n, k) << '\n'; // n^k
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// long long x = 1e9 + 7;

// long long mu1(long long a)
// {
//     return (a * a) % x;
// }

// long long mu2(long long n, long long k)
// {
//     if (k == 0)
//         return 1;
//     long long tmp = mu2(n, k / 2);
//     if (k % 2 == 0)
//         return (mu1(tmp)) % x;
//     return (n * (mu1(tmp))) % x;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, k;
//         cin >> n >> k;
//         cout << mu2(n, k) << endl;
//     }
// }
