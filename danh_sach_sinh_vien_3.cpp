#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    int stt, k = 0;
    string s[100];
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
        a[i].stt = i + 1;
        getline(cin, a[i].ten);
        for (int j = 0; j < a[i].ten.length(); j++)
        {
            if (a[i].ten[j] >= 'A' && a[i].ten[j] <= 'Z')
                a[i].ten[j] += 32;
        }
        stringstream s1(a[i].ten);
        while (s1 >> a[i].s[a[i].k])
        {
            a[i].s[a[i].k][0] = a[i].s[a[i].k][0] - 32;
            a[i].k++;
        }
        cin >> a[i].lop;
        cin >> a[i].ngay >> a[i].x;
        cin >> a[i].thang >> a[i].y;
        cin >> a[i].nam >> a[i].diem;
    }
}
bool kt(SinhVien a, SinhVien b)
{
    if (a.diem < b.diem)
        return false;
    return true;
}

void sapxep(struct SinhVien a[50], int n)
{
    sort(a, a + n, kt);
}

void in(struct SinhVien a[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].stt <= 9)
            cout << a[i].ma << "0" << a[i].stt << " ";
        else
            cout << a[i].ma << a[i].stt << " ";
        for (int j = 0; j < a[i].k; j++)
            cout << a[i].s[j] << " ";
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
    sapxep(ds, N);
    in(ds, N);
    return 0;
}