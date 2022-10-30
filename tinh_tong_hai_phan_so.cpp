#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu, mau, uoc, st, sm;
};

void nhap(struct PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

PhanSo tong(struct PhanSo p, struct PhanSo q)
{
    PhanSo a;
    a.st = p.tu * q.mau + q.tu * p.mau;
    a.sm = p.mau * q.mau;
    a.uoc = __gcd(a.st, a.sm);
    a.tu = a.st / a.uoc;
    a.mau = a.sm / a.uoc;
    return a;
}

void in(PhanSo t)
{
    cout << t.tu << "/" << t.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}