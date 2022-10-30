#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ma = {"N20DCCN001"};
    string ten;
    string lop;
    int ngay, thang, nam;
    char x, y;
    double diem;
};

void nhapThongTinSV(struct SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ngay >> a.x;
    cin >> a.thang >> a.y;
    cin >> a.nam >> a.diem;
}

void inThongTinSV(struct SinhVien a)
{
    cout << a.ma
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
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}