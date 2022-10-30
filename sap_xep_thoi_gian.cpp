#include <bits/stdc++.h>
using namespace std;

struct thoigian
{
    int gio, phut, giay;
};

bool kt(thoigian a, thoigian b)
{
    if (a.gio > b.gio)
        return false;
    else if (a.gio == b.gio)
    {
        if (a.phut > b.phut)
            return false;
        else if (a.phut == b.phut)
        {
            if (a.giay > b.giay)
                return false;
        }
    }
    return true;
}

void nhap(struct thoigian a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort(a, a + n, kt);
}

void in(struct thoigian a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    struct thoigian a[n];
    cin.ignore();
    nhap(a, n);
    in(a, n);
}