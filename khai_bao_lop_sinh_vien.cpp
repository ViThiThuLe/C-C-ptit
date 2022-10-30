#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ma;
    string ten;
    string lop;
    int ngay, thang, nam;
    char x, y;
    double diem;
};

void nhap(struct SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ngay >> a.x;
    cin >> a.thang >> a.y;
    cin >> a.nam >> a.diem;
}

void in(struct SinhVien a)
{
    cout << "B20DCCN001"
         << " ";
    cout << a.ten << " ";
    cout << a.lop << " ";
    if (a.ngay <= 9)
        cout << "0" << a.ngay << a.x;
    else
        cout << a.ngay << a.x;
    if (a.thang <= 9)
        cout << "0" << a.thang << a.y;
    else
        cout << a.thang << a.y;
    cout << a.nam << " ";
    cout << setprecision(2) << fixed << a.diem;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}