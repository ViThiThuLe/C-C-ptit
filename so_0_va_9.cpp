#include <bits/stdc++.h>
using namespace std;

void duyet()
{
    int n;
    cin >> n;
    queue<int> q;
    q.push(9);
    while (!q.empty())
    {
        int a = q.front();
        q.push(a * 10);
        q.push(a * 10 + 9);
        q.pop();
        if (a % n == 0)
        {
            cout << a << endl;
            break;
        }
    }
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
