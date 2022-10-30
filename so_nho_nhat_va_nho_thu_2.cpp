#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, dem = 0;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[0] != a[1])
                dem++;
        }
        if (dem != 0)
            cout << a[0] << " " << a[1];
        else
            cout << "-1";
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,m=1;
//         cin >> n ;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         sort(a,a+n);
//         for (int i = 0; i < n; i++){
//             if(a[i]==a[i+1]) m=0;
//         }
//         if(m==0) cout << "-1";
//         else cout << a[0] << " " <<a[1];
//         cout << endl;
//     }
// }
