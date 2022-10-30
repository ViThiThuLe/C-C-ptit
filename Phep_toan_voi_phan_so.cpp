#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu, mau, uoc, t, m;
};

PhanSo tong(struct PhanSo A, struct PhanSo B)
{
    PhanSo a;
    a.t = (A.tu * B.mau + B.tu * A.mau) * (A.tu * B.mau + B.tu * A.mau);
    a.m = A.mau * B.mau * A.mau * B.mau;
    a.uoc = __gcd(a.t, a.m);
    a.tu = a.t / a.uoc;
    a.mau = a.m / a.uoc;
    return a;
}

PhanSo tich(struct PhanSo A, struct PhanSo B)
{
    PhanSo C = tong(A, B);
    PhanSo b;
    b.t = A.tu * B.tu * C.tu;
    b.m = A.mau * B.mau * C.mau;
    b.uoc = __gcd(b.t, b.m);
    b.tu = b.t / b.uoc;
    b.mau = b.m / b.uoc;
    return b;
}

PhanSo process(struct PhanSo A, struct PhanSo B)
{
    PhanSo x = tong(A, B);
    PhanSo y = tich(A, B);
    cout << x.tu << "/" << x.mau << " " << y.tu << "/" << y.mau << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}