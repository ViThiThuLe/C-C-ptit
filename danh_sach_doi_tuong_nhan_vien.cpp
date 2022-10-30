#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    int ma;
    string ten,gt,ngaysinh,diachi,thue,nkhd;
    
};

struct NhanVien ds[50];

void nhap(struct NhanVien &a)
{
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt;
    cin >> a.ngaysinh;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.thue;
    cin >> a.nkhd;
}

void inds(struct NhanVien a)
{
    a.ma = 1;
    if (a.ma < 10)
        cout << "0000"
             << a.ma << " ";
    else if (a.ma > 9 && a.ma < 100)
        cout << "000"
             << a.ma << " ";
    else if (a.ma > 99 && a.ma < 1000)
        cout << "00"
             << a.ma << " ";
    else if (a.ma > 999 && a.ma < 10000)
        cout << "0"
             << a.ma << " ";
    else
        cout << a.ma << " ";
    cout << a.ten << " ";
    cout << a.gt << " ";
    cout << a.ngaysinh << " ";
    cout << a.diachi << " ";
    cout << a.thue << " ";
    cout << a.nkhd << endl;
    a.ma++;
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}