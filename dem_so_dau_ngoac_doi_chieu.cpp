#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    string s;
    cin >> s;
    stack<char> st;
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ')')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {
                st.push('('); // nếu s[i] là ngoặc đóng và stack rỗng thì push ngoặc mở '(' vào stack
                dem++;
            }
            else
                st.pop(); // nếu s[i] là ngoặc đóng và stack khác rỗng thì -> đc 1 cặp ngoặc đúng -> xóa đi
        }
    }
    if (!st.empty())
        dem += st.size() / 2;
    cout << dem << endl;
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
