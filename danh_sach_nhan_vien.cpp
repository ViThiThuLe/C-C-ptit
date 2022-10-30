#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    int ma;
    string ten;
    string gt;
    string ngaysinh;
    string diachi;
    string thue;
    string nkhd;
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

void inds(struct NhanVien ds[50], int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i < 10)
            cout << "0000"
                 << i << " ";
        else if (i > 9 && i < 100)
            cout << "000"
                 << i << " ";
        else if (i > 99 && i < 1000)
            cout << "00"
                 << i << " ";
        else if (i > 999 && i < 10000)
            cout << "0"
                 << i << " ";
        else
            cout << i << " ";
        cout << ds[i - 1].ten << " ";
        cout << ds[i - 1].gt << " ";
        cout << ds[i - 1].ngaysinh << " ";
        cout << ds[i - 1].diachi << " ";
        cout << ds[i - 1].thue << " ";
        cout << ds[i - 1].nkhd << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}