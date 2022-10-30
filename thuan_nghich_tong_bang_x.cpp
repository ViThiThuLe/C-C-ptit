#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
const int DEC_10 = 10;
bool thuannghich(ll n)
{
     ll a[20];
     ll dem = 0, i;
     do
     {
          a[dem++] = (n % DEC_10);
          n = n / DEC_10;
     } while (n > 0);
     for (i = 0; i < (dem / 2); i++)
     {
          if (a[i] != a[(dem - i - 1)])
          {
               return false;
          }
     }
     return true;
}
bool checkTongBangk(ll x, ll k)
{

     ll sum = 0;
     while (x > 0)
     {
          sum += x % 10;
          x = x / 10;
     }
     if (sum == k)
          return true;
     return false;
}
void slove()
{
     cout << " nhap so chu so va tong cua cac chu so: \n";
     ll n, k;
     cin >> n >> k;
     ll dem = 0;
     for (ll i = pow(10, n - 1); i < pow(10, n); i++)
     {
          if (checkTongBangk(i, k) && thuannghich(i))
               dem++;
     }
     cout << dem;
}
int main()
{
     slove();
}
//Code by TN