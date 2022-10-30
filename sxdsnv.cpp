#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    int ma = 0;
    string ten;
    string gt;
    int ngay, thang, nam;
    char x, y;
    string diachi;
    string thue;
    string nkhd;
};

void nhap(struct NhanVien &a)
{
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.gt;
    scanf("\n");
    cin >> a.ngay >> a.thang >> a.nam;
    
    getline(cin, a.diachi);
    cin >> a.thue;
    cin >> a.nkhd;
}

bool kt(NhanVien a, NhanVien b)
{
    if (a.nam > b.nam)
        return false;
    else if (a.nam == b.nam)
    {
        if (a.thang > b.thang)
            return false;
        else if (a.thang == b.thang)
        {
            if (a.ngay > b.ngay)
                return false;
        }
    }
    return true;
}

void sapxep(NhanVien a[40], int n)
{
    for (int i = 0; i < n; i++)
        a[i].ma = i + 1;
    sort(a, a + n, kt);
}

void inds(struct NhanVien a[40], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].ma < 10)
            cout << "0000"
                 << a[i].ma << " ";
        else if (i > 9 && i < 100)
            cout << "000"
                 << a[i].ma << " ";
        else if (i > 99 && i < 1000)
            cout << "00"
                 << a[i].ma << " ";
        else if (i > 999 && i < 10000)
            cout << "0"
                 << a[i].ma << " ";
        else
            cout << a[i].ma << " ";
        cout << a[i].ten << " ";
        cout << a[i].gt << " ";
        cout << a[i].ngay << a[i].x;
        cout << a[i].thang << a[i].y;
        cout << a[i].nam << " ";
        cout << a[i].diachi << " ";
        cout << a[i].thue << " ";
        cout << a[i].nkhd << endl;
    }
}

int main()
{
    struct NhanVien ds[40];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
