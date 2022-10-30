#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    int stt;
    string ma;
    string ten;
    string lop;
    string email;
    string dn;
};

bool kt(SinhVien a, SinhVien b)
{
    if (a.ten > b.ten)
        return false;
    return true;
}

void nhap(struct SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        a[i].stt = i + 1;
        cin >> a[i].ma;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop;
        cin >> a[i].email;
        cin >> a[i].dn;
    }
}

void inds(struct SinhVien a)
{
    cout << a.stt << " ";
    cout << a.ma << " ";
    cout << a.ten << " ";
    cout << a.lop << " ";
    cout << a.email << " ";
    cout << a.dn << " ";
    cout << endl;
}

int main()
{
    int n, q, k = 0;
    cin >> n;
    struct SinhVien a[n];
    nhap(a, n);
    sort(a, a + n, kt);
    cin >> q;
    scanf("\n");
    string s;
    for (int i = 0; i < q; i++)
    {
        getline(cin, s);
        for (int j = 0; j < n; j++)
        {
            if (a[j].dn == s)
                inds(a[j]);
        }
    }
    return 0;
}