#include <bits/stdc++.h>
using namespace std;

// xác định độ dài lớn nhất của cặp ngoặc đóng mở, nếu biểu thức không đúng in ra -1
// ví dụ: (((X))(((Y))))    -> 4

void duyet()
{
    string s;
    cin >> s;
    stack<char> st;
    int res;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push('(');
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                cout << "-1" << endl;
                break;
            }
            res = max(res, (int)st.size());
            st.pop();
        }
    }
    if (!st.empty())
        cout << "-1" << endl;
    else
        cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        duyet();
    }
}
