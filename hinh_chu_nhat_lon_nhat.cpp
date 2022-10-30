#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stack<int> st;
    int l[n], r[n];
    // duyệt bên trái
    for (int i = 0; i < n; i++)
    {
        // nếu a[i] <= p.tử có trị số là số đầu tiên trong stack thì xóa đi
        while (!st.empty() && a[i] <= a[st.top()])
            st.pop();
        // nếu stack rỗng thì hcn này có thể chạy đến cột đầu tiên
        if (st.empty())
            l[i] = 0;
        else
            l[i] = st.top() + 1; // nếu stack != rỗng thi hcn chạy đc đến vị trí hiện tại +1
        st.push(i);              // đẩy trị số i vào stack
    }
    // sau khi duyệt bên trái xong cần xóa hết các p.tử còn lại trong stack
    //để ta tiếp tục duyệt bên phải
    while (!st.empty())
        st.pop();
    // duyệt bên phải
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[i] <= a[st.top()])
            st.pop();
        if (st.empty())
            r[i] = n - 1;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }
    long long tich = 0;
    for (int i = 0; i < n; i++)
    {
        // r[i]-l[i]+1 là đáy
        tich = max((long long)(r[i] - l[i] + 1) * a[i], tich);
    }
    cout << tich << endl;
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
