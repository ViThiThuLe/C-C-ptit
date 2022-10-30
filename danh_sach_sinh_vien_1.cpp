#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    int stt;
    string ma = "B20DCCN0";
    string ten;
    string lop;
    int ngay, thang, nam;
    char x, y;
    double diem;
};

void nhap(struct SinhVien a[50], int n)
{

    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop;
        cin >> a[i].ngay >> a[i].x;
        cin >> a[i].thang >> a[i].y;
        cin >> a[i].nam >> a[i].diem;
    }
}

void in(struct SinhVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
            cout << a[i].ma << "0" << i + 1 << " ";
        else
            cout << a[i].ma << i + 1 << " ";
        cout << a[i].ten << " ";
        cout << a[i].lop << " ";
        if (a[i].ngay <= 9)
            cout << "0" << a[i].ngay << a[i].x;
        else
            cout << a[i].ngay << a[i].x;
        if (a[i].thang <= 9)
            cout << "0" << a[i].thang << a[i].y;
        else
            cout << a[i].thang << a[i].y;
        cout << a[i].nam << " ";
        cout << setprecision(2) << fixed << a[i].diem;
        cout << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
