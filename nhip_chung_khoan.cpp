#include <bits/stdc++.h>
using namespace std;

//  bài này giống với bài hcn lớn nhất nhưng chỉ duyệt bên phải

void duyet()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stack<int> st;
    int l[n];
    for (int i = 0; i < n; i++)
    {
        // nếu stack khác rỗng và p.tử đang xét lớn hơn hoặc bằng các p.tử trong stack
        // -> xóa đến khi gặp p.tử lớn hơn thì dừng
        while (!st.empty() && a[i] >= a[st.top()])
            st.pop();
        if (st.empty()) // stack = rỗng -> có thể chạy đến đầu mảng
            l[i] = 0;
        else
            l[i] = st.top() + 1; // ngược lại thì chạy đc đến vị trí của p.tử đầu tiên trong + 1
        st.push(i);
    }
    for (int i = 0; i < n; i++)
        cout << i - l[i] + 1 << " ";
    cout << endl;
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
