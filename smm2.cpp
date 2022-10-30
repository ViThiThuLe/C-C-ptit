#include <bits/stdc++.h>
using namespace std;

int ktra(long long n)
{
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    if (a == 6 && b == 8)
        return 1;
    return 0;
}

int tong(long long n)
{
    long long s = 0, m;
    while (n > 0)
    {
        m = n % 10;
        s += m;
        n /= 10;
    }
    return n = s;
}

int tong1(string s)
{
    int n = s.length();
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t += s[i];
    }
    if(t>9){
    	while (t > 9)
    {
        t = tong(t);
    }
	}
    return t;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.length();
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            d += s[i];
        }
        if (ktra(tong(d)) || tong1(s) == 9)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}
