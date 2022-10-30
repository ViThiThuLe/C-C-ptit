#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ma;
    string ten;
    string lop;
    double d1, d2, d3;
};

bool kt(SinhVien a, SinhVien b)
{
    if (a.ma > b.ma)
        return false;
    return true;
}

void nhap(struct SinhVien &a)
{
    cin >> a.ma;
//    cin.ignore();
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.d1 >> a.d2 >> a.d3;
}

void inds(struct SinhVien a[50], int n)
{
    sort(a, a + n, kt);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        cout << a[i].ma << " ";
        cout << a[i].ten << " ";
        cout << a[i].lop << " ";
        cout << setprecision(1) << fixed << a[i].d1 << " ";
        cout << setprecision(1) << fixed << a[i].d2 << " ";
        cout << setprecision(1) << fixed << a[i].d3 << " ";
        cout << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        nhap(ds[i]);
    inds(ds, n);
    return 0;
}
