#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238

struct dinh
{
    double x, y;
};

void nhap(struct dinh &A)
{
    cin >> A.x >> A.y;
}

double canh(struct dinh &A, struct dinh &B)
{

    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main()
{
    struct dinh A, B, C;
    int t;
    cin >> t;
    while (t--)
    {
        nhap(A);
        nhap(B);
        nhap(C);
        double s, r, dt, d1 = canh(A, B), d2 = canh(A, C), d3 = canh(B, C);
        if (d1 >= d2 + d3 ||
            d1 + d2 <= d3 ||
            d1 + d3 <= d2)
        {

            cout << "INVALID" << endl;
        }
        else
        {
            s = sqrt((d1 + d2 + d3) * (d1 + d2 - d3) * (d1 - d2 + d3) * (-d1 + d2 + d3));
            r = d1 * d2 * d3 / s;
            dt = PI * r * r;
            cout << fixed << setprecision(3) << dt << endl;
        }
    }
}