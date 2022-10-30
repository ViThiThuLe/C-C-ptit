#include <bits/stdc++.h>
using namespace std;

void ktra(int n, int a[])
{
    stack<int> st;
    int r[n]; // mảng lưu kết quả cuối cùng
    // phần tử bên phải nhỏ hơn đầu tiên => duyệt stack từ cuối mảng
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[i] >= st.top())
        {             // nếu stack khác rỗng và p.tử đang xét a[i] lớn hơn đỉnh của stack
            st.pop(); // xóa p.tử của stack đến khi a[i] gặp p.tử lớn hơn
        }
        if (st.empty())
            r[i] = -1; // nếu stack rỗng thì lưu k.quả là -1;
        else
            r[i] = st.top(); // ngược lại k.quả là đỉnh của stack
        st.push(a[i]);       // lưu lại để p.tử tiếp theo còn xét
    }
    // in k.quả
    for (int i = 0; i < n; i++)
        cout << r[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ktra(n, a);
    }
}
