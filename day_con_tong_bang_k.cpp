#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], sum, ktra;

int check()
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            sum += a[i];
        }
    }
    if (sum == k)
        return 1;
    return 0;
}

void in()
{
    if (check())
    {
        ktra = 1;
        int vt;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {
                vt = i;
            }
        }
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1 && i != vt)
                cout << a[i] << " ";
            if (b[i] == 1 && i == vt) // neu i la phan tu cuoi cung thi in a[i] khong in dau cach
                cout << a[i];
        }
        cout << "]"
             << " ";
    }
}

void quaylui(int x)
{
    for (int i = 1; i >= 0; i--)
    {
        b[x] = i;
        if (x == n - 1)
            in();
        else
            quaylui(x + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        quaylui(0);
        if (ktra == 0)
            cout << "-1";
        cout << endl;
    }
}

//#include <bits/stdc++.h>
// using namespace std;
// int n, a[100000], b[100], k, sum;
// vector<vector<int>> res;
//
// void ktra()
//{
//    // ktra dãy con của mảng a nếu có tổng = k thì đưa vào vector res
//    vector<int> v;
//    sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i] == 1)
//        {
//            sum += a[i];
//            v.push_back(a[i]);
//        }
//    }
//    if (sum == k)
//    {
//        sort(v.begin(), v.end());
//        res.push_back(v);
//    }
//}
//
// void in()
//{
//    // nếu res k có p.tử nào => in -1
//    if (res.size() == 0)
//        cout << "-1";
//    else
//    {
//        // ngược lại in ra res
//        for (int i = 0; i < res.size(); i++)
//        {
//            cout << "[";
//            for (int j = 0; j < res[i].size() - 1; j++)
//                cout << res[i][j] << " ";
//            cout << res[i][res[i].size() - 1] << "]";
//        }
//    }
//    cout << endl;
//}
//
// void quaylui(int i)
//{
//    for (int j = 0; j <= 1; j++)
//    {
//        b[i] = j;
//        if (i == n - 1)
//        {
//            ktra();
//        }
//        else
//            quaylui(i + 1);
//    }
//}
//
// int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> k;
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//        sort(a, a + n);
//        quaylui(0);
//        in();
//        res.clear();
//    }
//}
