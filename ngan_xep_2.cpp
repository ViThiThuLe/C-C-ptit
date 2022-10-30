#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int x;
    stack<int> st;
    while (n--)
    {
        cin >> s;
        // nếu xâu s == PUSH thì in ra x và thêm x vào st
        if (s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        // nếu xâu s == POP và st khác rỗng thì xóa phần tử đầu tiên của st
        else if (s == "POP")
        {
            if (st.size() > 0)
                st.pop();
        }
        // nếu s == PRINT thì in ra phần tử đầu tiên của st
        // nếu st rỗng thì in ra NONE
        else if (s == "PRINT")
            if (st.size() == 0)
                cout << "NONE" << endl;
            else
                cout << st.top() << endl;
    }
}