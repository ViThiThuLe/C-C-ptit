#include <bits/stdc++.h>
using namespace std;

int n, k, b[100], dem, d;
string s = "BA", temp;
vector<string> v;

bool check()
{
    dem = 0;
    d = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i])
            dem++;
        else
            dem = 0;
        if (dem == k)
            d++;
        if (dem > k)
            return false;
    }
    return (d == 1); // tra ve gia tri dung khi co dua nhat mot con dem = k
}

void xuly()
{
    temp = "";
    for (int i = 0; i < n; i++)
    {
        temp += s[b[i]];
    }
    if (check())
        v.push_back(temp);
}

void in()
{
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

void sinh(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n - 1)
            xuly();
        else
            sinh(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    sinh(0);
    in();
}