#include <bits/stdc++.h>
using namespace std;

double p[41] = {0};

void quydoi()
{
    for (int i = 3; i <= 4; i++)
        p[i] = 2.5;
    for (int i = 5; i <= 6; i++)
        p[i] = 3.0;
    for (int i = 7; i <= 9; i++)
        p[i] = 3.5;
    for (int i = 10; i <= 12; i++)
        p[i] = 4.0;
    for (int i = 13; i <= 15; i++)
        p[i] = 4.5;
    for (int i = 16; i <= 19; i++)
        p[i] = 5.0;
    for (int i = 20; i <= 22; i++)
        p[i] = 5.5;
    for (int i = 23; i <= 26; i++)
        p[i] = 6.0;
    for (int i = 27; i <= 29; i++)
        p[i] = 6.5;
    for (int i = 30; i <= 32; i++)
        p[i] = 7.0;
    for (int i = 33; i <= 34; i++)
        p[i] = 7.5;
    for (int i = 35; i <= 36; i++)
        p[i] = 8.0;
    for (int i = 37; i <= 38; i++)
        p[i] = 8.5;
    for (int i = 39; i <= 40; i++)
        p[i] = 9.0;
}
int main()
{
    int t;
    cin >> t;
    quydoi();
    while (t--)
    {
        int a, b;
        double x, y;
        cin >> a >> b >> x >> y;
        double tb = (p[a] + p[b] + x + y) / 4;
        if (tb - (int)tb < 0.25)
            tb = (int)tb;
        if (tb - (int)tb >= 0.25 && tb - (int)tb < 0.75)
            tb = (int)tb + 0.5;
        if (tb - (int)tb >= 0.75)
            tb = (int)tb + 1.0;
        cout << fixed << setprecision(1) << tb << endl;
    }
}