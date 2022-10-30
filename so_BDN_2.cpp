#include <bits/stdc++.h>
using namespace std;

void bfs()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    int dem = 0;
    while (!q.empty())
    {
        string a = q.front();
        if (dem == n)
        {
            cout << a << endl;
            return;
        }
        q.push(a + '0');
        q.push(a + '1');
        q.pop();
        dem++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bfs();
    }
}
