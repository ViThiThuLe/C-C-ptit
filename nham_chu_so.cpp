#include <bits/stdc++.h>
using namespace std;

// đổi 6 => 5
long long nhonhat(long long x)
{
    string s = to_string(x); // chyển x thành 1 xâu
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '6')
            s[i] = '5';
    }
    long long res = stoll(s); // chuyển xâu thành số
    return res;
}

// đổi 5 => 6
long long lonnhat(long long x)
{
    string s = to_string(x); // chyển x thành 1 xâu
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '5')
            s[i] = '6';
    }
    long long res = stoll(s); // chuyển xâu thành số
    return res;
}

// tổng nhỏ nhất
long long tongnho(long long a, long long b)
{
    long long tong = nhonhat(a) + nhonhat(b);
    return tong;
}

// tổng lớn nhất
long long tonglon(long long a, long long b)
{
    long long tong = lonnhat(a) + lonnhat(b);
    return tong;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << tongnho(a, b) << " " << tonglon(a, b) << endl;
}