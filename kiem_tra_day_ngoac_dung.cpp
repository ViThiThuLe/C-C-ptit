#include <bits/stdc++.h>
using namespace std;

bool ktra(char s, char c)
{
    if (s == '(' && c == ')' || s == '[' && c == ']' || s == '{' && c == '}')
        return true;

    return false;
}

void duyet()
{
    string s;
    cin >> s;
    stack<char> st;
    int check;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            // nếu là ngoặc đóng mà stack rỗng thì là sai (gặp ngoặc đóng nhưng k có ngoặc mở => sai)
            if (st.empty())
            {
                check = 0;
                break;
            }
            if (ktra(st.top(), s[i]))
                check = 1;
            else
            {
                check = 0;
                break;
            }
            st.pop();
        }
    }
    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
