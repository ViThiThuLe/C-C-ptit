#include <bits/stdc++.h>
using namespace std;

// sắp xếp chèn trực tiếp - Infertion Sort

// void sapxepchen(int a[], int n)
// {
//     int pos, x, m = 0;
//     for (int i = 1; i < n; i++)
//     {
//         x = a[i];
//         pos = i - 1;
//         while (pos >= 0 && a[pos] > x)
//         {
//             a[pos + 1] = a[pos];
//             pos--;
//         }
//         a[pos + 1] = x;
//         cout << "Buoc " << m << ": ";
//         for (int k = 0; k <= m; k++)
//             cout << a[k] << " ";
//         m++;
//         cout << endl;
//     }
// }

void sapxep(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (a[j] > a[i])
                swap(a[j], a[i]);
        }
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sapxep(a, n);
}
