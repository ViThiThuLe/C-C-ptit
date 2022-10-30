#include <bits/stdc++.h>

using namespace std;

void TC()
{
    string s;
    getline(cin, s);
    int n = s.size();
    stack<char> st;
    int check;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ')')
            st.push(s[i]); // nếu s[i] không phải ngoặc đóng thì đẩy s[i] vào stack
        else
        {
            check = 0;
            while (!st.empty()) // duyệt các p.tử của stack đến khi gặp ngoặc mở "("
            {
                char c = st.top(); // ((a+b)) -> xét (a+b)
                st.pop();
                // nếu có dấu -> biểu thức đúng
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    check = 1;
                if (c == '(')
                    break;
            }
            if (check == 0)
            {
                // có thừa cặp ngoặc "(", ")"
                cout << "Yes" << endl;
                return;
                // nếu không return thì sẽ in ra "Yes" nhiều lần nếu có nhiều cặp ngoặc thừa
                // VD: (((a+b))) -> output: Yes Yes
            }
        }
    }
    if (check)
        cout << "No" << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        TC();
    }
    return 0;
}
