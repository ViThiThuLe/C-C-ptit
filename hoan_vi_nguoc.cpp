#include <bits/stdc++.h>
using namespace std;
int n, a[11], check[11] = {};

void out()
{
    for (int i = n; i >= 1; i--)
        cout << a[i];
    cout << " ";
}

void Quaylui(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
            if (i == 1)
                out();
            else
                Quaylui(i - 1);
            check[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Quaylui(n);
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// void Print(vector<pair<int, int>> v)
// {
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i].second;
//     cout << " ";
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             v[i].first = i + 1;
//             v[i].second = n - v[i].first + 1;
//         }
//         Print(v);
//         while (next_permutation(v.begin(), v.end()))
//             Print(v);
//         cout << endl;
//     }
//     return 0;
// }