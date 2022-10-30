#include <bits/stdc++.h>
using namespace std;

int matran(int a[], int n)
{
    stack<int> st;
    int l[n], r[n];
    // duyệt bên trái
    for (int i = 0; i < n; i++)
    {
        // nếu a[i] <= p.tử có trị số là số đầu tiên trong stack thì xóa đi
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        // nếu stack rỗng thì hcn này có thể chạy đến cột đầu tiên
        if (st.empty())
        {
            l[i] = 0;
        }
        // nếu stack != rỗng thi hcn chạy đc đến vị trí hiện tại +1
        else
            l[i] = st.top() + 1;
        st.push(i);
    }

    // sau khi duyệt bên trái xong cần xóa hết các p.tử còn lại trong stack
    //để ta tiếp tục duyệt bên phải
    while (!st.empty())
        st.pop();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            r[i] = n - 1;
        }
        else
            r[i] = st.top() - 1;
        st.push(i);
    }

    // tìm hcn có diện tích lớn nhất trên mỗi hàng
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int canhday = r[i] - l[i] + 1;
        res = max(res, canhday * a[i]);
    }
    return res;
}

void duyet()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // dồn cột -> mỗi hàng là một bài hcn lớn nhất
    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] != 0 && a[i - 1][j] != 0)
                a[i][j] = a[i - 1][j] + a[i][j];

    // tìm ra hcn có S lớn nhất trong tất cả các hàng của ma trận
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, matran(a[i], m));
    }
    cout << res << endl;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        duyet();
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int matran(int a[], int n)
// {
//     stack<int> st;
//     int l[n], r[n];
//     // duyệt bên trái
//     for (int i = 0; i < n; i++)
//     {
//         // nếu a[i] <= p.tử có trị số là số đầu tiên trong stack thì xóa đi
//         while (!st.empty() && a[i] <= a[st.top()])
//             st.pop();
//         // nếu stack rỗng thì hcn này có thể chạy đến cột đầu tiên
//         if (st.empty())
//             l[i] = 0;
//         else
//             l[i] = st.top() + 1; // nếu stack != rỗng thi hcn chạy đc đến vị trí hiện tại +1
//         st.push(i);              // đẩy trị số i vào stack
//     }
//     // sau khi duyệt bên trái xong cần xóa hết các p.tử còn lại trong stack
//     //để ta tiếp tục duyệt bên phải
//     while (!st.empty())
//         st.pop();
//     // duyệt bên phải
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!st.empty() && a[i] <= a[st.top()])
//             st.pop();
//         if (st.empty())
//             r[i] = n - 1;
//         else
//             r[i] = st.top() - 1;
//         st.push(i);
//     }
//     long long tich = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // r[i]-l[i]+1 là đáy
//         tich = max((long long)(r[i] - l[i] + 1) * a[i], tich);
//     }
//     return tich;
// }

// void duyet()
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> a[i][j];
//     // dồn cột -> mỗi hàng là một bài hcn lớn nhất
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             if (a[i][j] != 0 && a[i - 1][j] != 0)
//                 a[i][j] = a[i - 1][j] + a[i][j];

//     int tich = 0;

//     for (int i = 0; i < n; i++)
//     {
//         tich = max(tich, matran(a[i], m));
//     }
//     cout << tich << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         duyet();
//     }
// }
