#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string ten;
    string ngaysinh;
    double d1, d2, d3, dt;
};

void nhap(struct ThiSinh &A)
{
    getline(cin, A.ten);
    cin >> A.ngaysinh;
    cin >> A.d1 >> A.d2 >> A.d3;
    A.dt = A.d1 + A.d2 + A.d3;
}

void in(struct ThiSinh A)
{
    cout << A.ten << " ";
    cout << setprecision(1) << fixed << A.ngaysinh << " " << A.dt;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}