#include <bits/stdc++.h>

using namespace std;

struct GiaoVien
{
    string ma, ten;
    int luongCoBan, phuCap, tong;
};

void nhap(struct GiaoVien &a)
{
    cin >> a.ma;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.luongCoBan;
}

void in(struct GiaoVien a)
{
    int x = (a.ma[2] - '0') * 10 + a.ma[3] - '0';
    a.tong = x * a.luongCoBan;
    if (a.ma[1] == 'T')
    {
        a.tong += 2000000;
        a.phuCap = 2000000;
    }
    else if (a.ma[1] == 'P')
    {
        a.tong += 900000;
        a.phuCap = 900000;
    }
    else
    {
        a.tong += 500000;
        a.phuCap = 500000;
    }
    cout << a.ma << " ";
    cout << a.ten << " ";
    cout << x << " ";
    cout << a.phuCap << " " << a.tong;
}

int main()
{
    GiaoVien a;
    nhap(a);
    in(a);
}