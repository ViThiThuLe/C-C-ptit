#include <bits/stdc++.h>
using namespace std;

void loc(int n, int a[])
{
    int m = 0;
    int b[100];
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                k = 0;
        }
        if (k == 1)
        {
            b[m] = a[i];
            m++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    loc(n, a);
}