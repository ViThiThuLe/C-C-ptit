#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string ten;
    string gt;
    string ngaysinh;
    string diachi;
    long thue;
    string nkhd;
};

void nhap(struct NhanVien &a)
{
    getline(cin, a.ten);
    cin >> a.gt;
    cin >> a.ngaysinh;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.thue;
    cin >> a.nkhd;
}

void in(struct NhanVien a)
{
    cout << "00001"
         << " ";
    cout << a.ten << " ";
    cout << a.gt << " ";
    cout << a.ngaysinh << " ";
    cout << a.diachi << " ";
    cout << a.thue << " ";
    cout << a.nkhd;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}