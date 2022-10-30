#include <bits/stdc++.h>
using namespace std;

struct toado
{
    int x, y;
};

void nhap(struct toado &a)
{
    cin >> a.x >> a.y;
}

float tinh(struct toado a, struct toado b, struct toado c)
{
    float s = 0;
    s = 1 / 2 * (abs((c.x - a.x) * (b.y - a.y) - (b.x - a.x) * (c.y - a.y)));
    return s;
}

void xuat(struct toado a[1000], int n)
{
    float s = 0;
    for (int i = 0; i < n - 1; i++)
        s += tinh(a[0], a[i], a[i + 1]);
    cout << setprecision(3) << fixed << s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        struct toado a[1000];
        for (int i = 0; i < n; i++)
            nhap(a[i]);
        xuat(a, n);
        cout << endl;
    }
}