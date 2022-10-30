#include <bits/stdc++.h>
using namespace std;

// tiền tố => trung tố -> duyệt từ cuối
// 1 dấu thao tác với 2 chữ

bool dau(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

void TC()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (dau(s[i]))
        {                         // nếu s[i] là dấu
            string s1 = st.top(); // lấy p.tử đầu tiên của stack gán vào s1
            st.pop();             // xóa p.tử
            string s2 = st.top();
            st.pop();
            // stack hiện tại = rỗng
            string them = "(" + s1 + s[i] + s2 + ")"; // cộng các xâu(ký tự)
            st.push(them);
        }
        else
            st.push(string(1, s[i])); // nếu s[i] != dấu -> gán vào stack, vì đang là ký tự nên phải đổi sang string
    }
    // in ra các p.tử trong stack
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        TC();
    }
}
