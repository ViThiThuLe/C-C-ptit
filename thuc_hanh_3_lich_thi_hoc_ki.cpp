#include <bits/stdc++.h>
using namespace std;

int _ma = 1;
class MonHoc
{
public:
    string ma, ten;
    friend istream &operator>>(istream &is, MonHoc &a)
    {
        getline(is, a.ma);
        getline(cin, a.ten);
        return is;
    }
};
int q = 1;
int ghi_ma(string s)
{
    int x = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            x = x * 10 + (int)s[i] - 48;
    return x;
}
class LichThi
{
public:
    string ma1, ngay, gio, nhom, ten;
    int ma;
    friend istream &operator>>(istream &is, LichThi &a)
    {
        a.ma = q++;
        cin >> a.ma1 >> a.ngay >> a.gio >> a.nhom;
        return is;
    }
    friend ostream &operator<<(ostream &os, LichThi a)
    {
        cout << "T" << setw(3) << setfill('0') << a.ma << " " << a.ma1 << " ";
        cout << a.ten << " " << a.ngay << " " << a.gio << " " << a.nhom << endl;
        return os;
    }
};
int ss(LichThi lt1, LichThi lt2)
{
    string s1 = lt1.ngay.substr(6, 4) + lt1.ngay.substr(3, 2) + lt1.ngay.substr(0, 2);
    string s2 = lt2.ngay.substr(6, 4) + lt2.ngay.substr(3, 2) + lt2.ngay.substr(0, 2);
    if (s1 == s2)
    {
        if (lt1.gio == lt2.gio)
            return lt1.nhom < lt2.nhom;
        return lt1.gio < lt2.gio;
    }
    return s1 < s2;
}
void process(MonHoc mh[], int n, LichThi lt[], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (lt[i].ma1 == mh[j].ma)
            {
                lt[i].ten = mh[j].ten;
            }
        }
    }
    sort(lt, lt + m, ss);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> mh[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> lt[i];
    }
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++)
    {
        cout << lt[i];
    }
}