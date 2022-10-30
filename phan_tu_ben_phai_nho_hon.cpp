#include <bits/stdc++.h>
using namespace std;

// 7
// 5 1 9 2 5 1 7  -> 2 2 -1 1 -1 -1 -1

// 8
// 4 8 2 1 9 5 6 3 -> 2 5 5 5 -1 3 -1 -1

int n, a[1000005], r[1000005], l[1000005];

void duyetlonhon(stack<int> st) // tim phan tu dau tien ben phai lon hon
{
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[i] >= a[st.top()])
            st.pop();
        if (st.empty())
            r[i] = -1;
        else
            r[i] = st.top();
        st.push(i);
    }
    // test 1: r[] =  2, 2, -1, 0, 6, 6, -1
}

void duyetnhohon(stack<int> st) // tim phan tu dau tien ben phai nho hon
{
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[i] <= st.top())
            st.pop();
        if (st.empty())
            l[i] = -1;
        else
            l[i] = st.top();
        st.push(a[i]); // de luc in de hon => push vao a[i]
    }
    // test 1: l[] =  1, -1, 2, 1, 1, -1, -1
}

void duyet()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stack<int> st1;
    stack<int> st2;
    duyetlonhon(st1);
    duyetnhohon(st2);

    for (int i = 0; i < n; i++)
    {
        if (r[i] == -1)
            cout << -1
                 << " ";
        else
            cout << l[r[i]] << " ";
    }
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
