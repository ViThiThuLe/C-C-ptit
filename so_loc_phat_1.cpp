#include <bits/stdc++.h>
using namespace std;

void ktra(int n)
{
    if (n == 1)
        cout << "8"
             << " "
             << "6";
    else
    {
        int b = pow(2, n);
        for (int i = 0; i < b; i++)
        {
            string a;
            for (int j = 0; j < n; j++)
            {
                if (i % 2 == 0)
                    a[j] = '8';
                else
                    a[j] = '6';
                i /= 2;
            }
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[j];
            }
            cout << " ";
        }
    }
    // ktra(n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ktra(n);
        cout << endl;
    }
}