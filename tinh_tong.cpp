#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream Pin("DATA.in");
    ofstream Pout("DATA.out");
    long long k = 0;
    while (!Pin.eof())
    {
        string s;
        Pin >> s;
        int kt = 1;
        long long t = 0;
        int n = s.length();
        if (n <= 9)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] <= '9' && s[i] >= '0')
                    t = t * 10 + (s[i] - '0');
                else
                {
                    kt = 0;
                    break;
                }
            }
            if (kt == 1)
                k += t;
        }
    }
    cout << k;
    Pin.close();
}
