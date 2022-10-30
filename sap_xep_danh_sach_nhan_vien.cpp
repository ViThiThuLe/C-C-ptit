#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    int ma;
    string ten;
    string gt;
    int ngay, thang, nam;
    char x, y;
    string diachi;
    string thue;
    string nkhd;
    string m, n;
};

void nhap(struct NhanVien &a)
{
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.gt;
    scanf("\n");

    cin >> a.ngay >> a.x;
    cin >> a.thang >> a.y;
    cin >> a.nam;
    scanf("\n");
    getline(cin, a.diachi);
    scanf("\n");
    cin >> a.thue;
    scanf("\n");
    cin >> a.nkhd;
    a.m = to_string(a.thang);
    a.n = to_string(a.ngay);
    if (a.m.length() < 2)
        a.m.insert(0, 1, '0');
    if (a.n.length() < 2)
        a.n.insert(0, 1, '0');
}

bool kt(NhanVien a, NhanVien b)
{
    if (a.nam > b.nam)
        return false;
    if (a.nam == b.nam)
    {
        if (a.thang > b.thang)
            return false;
        else if (a.thang == b.thang && a.ngay > b.ngay)
        {
            return false;
        }
    }
    return true;
}

void sapxep(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i].ma = i + 1;
    sort(a, a + n, kt);
}

void inds(struct NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ma << " ";
        cout << a[i].ten << " ";
        cout << a[i].gt << " ";
        cout << a[i].n << "/";
        cout << a[i].m << "/";
        cout << a[i].nam << " ";
        cout << a[i].diachi << " ";
        cout << a[i].thue << " ";
        cout << a[i].nkhd << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}