#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string ma, ten;
    float toan, ly, hoa, u;
};

void nhap(struct ThiSinh &a)
{
    cin >> a.ma;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.toan >> a.ly >> a.hoa;
}

void in(struct ThiSinh a)
{
    string s;
    for (int i = 0; i < 3; i++)
        s.push_back(a.ma[i]);
    if (s == "KV1")
        a.u = 0.5;
    if (s == "KV2")
        a.u = 1.0;
    if (s == "KV3")
        a.u = 2.5;
    float t = a.toan * 2 + a.ly + a.hoa + a.u;
    cout << a.ma << " " << a.ten << " " << a.u << " ";
    if (t - a.u == (int)t - a.u)
        cout << fixed << setprecision(0) << t - a.u;
    else
        cout << fixed << setprecision(1) << t - a.u;
    if (t < 24)
        cout << " TRUOT";
    else
        cout << " TRUNG TUYEN";
}

int main()
{
    ThiSinh a;
    nhap(a);
    in(a);
}