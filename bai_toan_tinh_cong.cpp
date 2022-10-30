#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string ten;
    long long luong;
    int ngay;
    string chucvu;
};

void nhap(struct NhanVien &a)
{
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.luong >> a.ngay >> a.chucvu;
}

void in(struct NhanVien a)
{
    long long luongthang = 0;
    long long phucap = 0;
    long long thunhap = 0;
    luongthang = a.luong * a.ngay;
    cout << "NV01"
         << " " << a.ten << " ";
    cout << luongthang << " ";
    if (a.ngay > 25)
    {
        cout << luongthang * 20 / 100 << " ";
        luongthang += luongthang * 20 / 100;
    }
    else if (a.ngay >= 22 && a.ngay < 25)
    {
        cout << luongthang * 10 / 100 << " ";
        luongthang += luongthang * 10 / 100;
    }
    else
    {
        cout << "0"
             << " ";
    }
    if (a.chucvu == "GD")
        phucap = 250000;
    else if (a.chucvu == "PGD")
        phucap = 200000;
    else if (a.chucvu == "TP")
        phucap = 180000;
    else
        phucap = 150000;
    cout << phucap << " ";
    cout << luongthang + phucap;
}

int main()
{
    NhanVien a;
    nhap(a);
    in(a);
}