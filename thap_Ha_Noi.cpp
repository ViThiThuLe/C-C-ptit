#include <bits/stdc++.h>
using namespace std;

void thapHN(int n, char a, char b, char c)
{
    if (n == 1)
        cout << a << " -> " << c << endl; // nếu n=1 chuyển đĩa cột a sang cột c
    else
    {
        thapHN(n - 1, a, c, b);
        thapHN(1, a, b, c);
        thapHN(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    cin >> n;
    char a = 'A', b = 'B', c = 'C';
    thapHN(n, a, b, c);
}
