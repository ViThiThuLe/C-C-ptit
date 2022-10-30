#include <bits/stdc++.h>
using namespace std;

int m, n;
int A[1001][1001], cnt[1001][1001];

void bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(1, 1));
    cnt[1][1] = 0;
    while (!q.empty())
    {
        // lay trang thai dau tien cua q ra
        pair<int, int> a = q.front();
        int x = a.first;  // x la hang
        int y = a.second; // y la cot
        // kiem tra trang thai dich
        if (x == m && y == n)
        {
            cout << cnt[x][y] << endl;
            return;
        }
        // x,y -> (x, y + A[x][y]) || (x + A[x][y], y)
        int newX = x + A[x][y];
        int newY = y + A[x][y];
        // 1 ->(1 buoc) 10, 11
        // tim cac trang thai moi, danh dau trang thai moi
        // kiem tra trang thai nay da tung xuat hien trong queue hay chua
        // da tung di qua hay chua
        if (cnt[x][newY] == -1)
        {
            q.push(make_pair(x, newY));
            cnt[x][newY] = cnt[x][y] + 1;
        }
        if (cnt[newX][y] == -1)
        {
            q.push(make_pair(newX, y));
            cnt[newX][y] = cnt[x][y] + 1;
        }
        q.pop();
    }
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> A[i][j];
                cnt[i][j] = -1;
            }
        bfs();
    }
}