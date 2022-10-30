#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
	long long tu, mau, uoc;
};

void nhap(struct PhanSo &p)
{
	cin >> p.tu >> p.mau;
}

void rutgon(struct PhanSo &p)
{
	p.uoc = __gcd(p.tu, p.mau);
}

void in(struct PhanSo p)
{
	cout << p.tu / p.uoc << "/" << p.mau / p.uoc;
}

int main()
{
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}