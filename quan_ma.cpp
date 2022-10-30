#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int x, y, m, n;
int cnt[15][15];
int X[] = {-1, -1, 1, 1, 2, 2, -2, -2};
int Y[] = {-2, 2, -2, 2, -1, 1, -1, 1};

void bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    cnt[x][y] = 0;
    while (!q.empty())
    {
        pair<int, int> a = q.front();
        int a1 = a.first;
        int a2 = a.second;
        if (a1 == m && a2 == n)
        {
            cout << cnt[a1][a2] << endl;
            return;
        }
        int newX, newY;
        for (int i = 0; i < 8; i++)
        {
            newX = a1 + X[i];
            newY = a2 + Y[i];
            if (newX <= 0 || newY <= 0 || newX > 8 || newY > 8)
                continue;
            q.push(make_pair(newX, newY));
            cnt[newX][newY] = cnt[a1][a2] + 1;
        }
        q.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        x = s1[0] - 'a' + 1;
        y = s1[1] - '0';
        m = s2[0] - 'a' + 1;
        n = s2[1] - '0';
        bfs();
    }
}