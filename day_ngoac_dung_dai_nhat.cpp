#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> a;
int res[100005];

void dem()
{
    int d = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (res[i] == 0)
        {
            d++;
            ans = max(ans, d);
        }
        else
            d = 0;
    }
    cout << ans << endl;
}

void duyet()
{
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(i);
        else
        {
            if (st.empty())
                a.push_back(i); // push nhung con ngoac ) sai vao a
            else
                st.pop();
        }
    }
    while (!st.empty())
    {
        a.push_back(st.top()); // push ngoac mo sai vao a
        st.pop();
    }
    memset(res, 0, sizeof(res));
    for (int i = 0; i < a.size(); i++)
    {
        res[a[i]] = 1; // danh dau ngoac sai bang 1
    }
    dem();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        a.clear();
        duyet();
    }
}

// #include <bits/stdc++.h>
// #include <stack>
// using namespace std;

// void duyet()
// {
//     int dem = 0;
//     stack<int> s;
//     s.push(-1);
//     string X;
//     cin >> X;
//     for (int i = 0; i < X.size(); i++)
//     {
//         if (X[i] == '(')
//         {
//             s.push(i);
//         }
//         else
//         {
//             if (s.size() > 0)
//             {
//                 s.pop();
//                 dem = max(dem, i - s.top());
//             }
//             if (s.size() == 0)
//                 s.push(i);
//         }
//     }
//     cout << dem << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         duyet();
//     }
//     return 0;
// }