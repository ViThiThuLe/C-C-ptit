#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    int n;
    cin >> n;
    int a[n];
    int b[n], cmp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cmp[a[i]]++;
    }
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && cmp[a[i]] >= cmp[st.top()])
            st.pop();
        if (st.empty())
            b[i] = -1;
        else
            b[i] = b[a[i]];
        st.push(a[i]);
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
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