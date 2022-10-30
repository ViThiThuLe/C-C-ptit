#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
public:
    long long tu, mau;
    PhanSo(long long t, long long m)
    {
        tu = t;
        mau = m;
    }
    void rutgon()
    {
        long long uoc = __gcd(tu, mau);
        tu = tu / uoc;
        mau = mau / uoc;
    }
    friend istream &operator>>(istream &in, PhanSo &p)
    {
        in >> p.tu >> p.mau;

        return in;
    }
    friend ostream &operator<<(ostream &out, const PhanSo &p)
    {
        out << p.tu << "/" << p.mau;

        return out;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}