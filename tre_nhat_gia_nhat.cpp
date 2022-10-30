#include <bits/stdc++.h>
using namespace std;

struct gt
{
    string ten;
    int ngay, thang, nam;
    char x, y;
};

bool kt(gt a, gt b)
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

void nhap(struct gt a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ten;
        cin >> a[i].ngay >> a[i].x;
        cin >> a[i].thang >> a[i].y;
        cin >> a[i].nam;
    }
    sort(a, a + n, kt);
}

void in(struct gt a[], int n)
{
    cout << a[n - 1].ten << endl;
    cout << a[0].ten << endl;
}

int main()
{
    int n;
    cin >> n;
    struct gt a[n];
    cin.ignore();
    nhap(a, n);
    in(a, n);
}
