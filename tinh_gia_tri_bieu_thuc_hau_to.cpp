#include <bits/stdc++.h>
using namespace std;

// hậu tố  -> duyệt từ đầu
// 1 dấu thao tác với 2 chữ
// note : trung sang hau thi duyet tu cuoi day ve dau day, hau sang trung thi duyet tu dau day den cuoi day;
// chieu duyet nguoc voi chieu muon chuyen;

bool dau(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

int tinh(int s2, int s1, char c)
{
    if (c == '+')
        return s2 + s1;
    if (c == '-')
        return s2 - s1;
    if (c == '*')
        return s2 * s1;
    return s2 / s1;
}

void TC()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        // nếu s[i] là dấu
        if (dau(s[i]))
        {
            int s1 = st.top(); // lấy p.tử đầu tiên của stack gán vào s1
            st.pop();          // xóa p.tử
            int s2 = st.top();
            st.pop();
            // stack hiện tại = rỗng
            int them = tinh(s2, s1, s[i]);
            st.push(them);
        }
        // nếu s[i] != dấu -> gán vào stack dạng số
        else
            st.push(s[i] - '0');
    }
    cout << st.top() << endl;
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
