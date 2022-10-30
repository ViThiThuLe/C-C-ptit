#include <bits/stdc++.h>
using namespace std;

void ktra(stack<int> st)
{
    vector<int> a;
    // stack hiện tại: 3 5 7
    // gán p.tử từ stack vào mảng a
    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    // mảng a hiện tại a= 7 5 3
    reverse(a.begin(), a.end()); // hàm đảo ngược các p.tử trong mảng
    if (a.size() == 0)
        cout << "empty" << endl;
    else
    {
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

void TC()
{
    string s;
    int x;
    stack<int> st;
    while (cin >> s)
    { // nhập không giới hạn số lần
        // nếu s= push thì nhập x, đưa x vào stack
        if (s == "push")
        {
            cin >> x;
            st.push(x);
        }
        // nếu s= pop thì xóa 1 p.tử trong stack với đk stack khác rỗng
        if (s == "pop")
        {
            if (!st.empty()) // = if(st.size()>0)
                st.pop();
        }
        // nếu s= show thì in ra các p.tử trong stack theo thứ tự nhập vào
        if (s == "show")
            ktra(st);
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        TC();
    }
}
