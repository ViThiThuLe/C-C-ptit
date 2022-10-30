#include <bits/stdc++.h>
using namespace std;

int n, cnt[105][105];
char s[105][105];
int a, b, c, d;

void BFS()
{
    queue<pair<int, int>> q;
    q.push({a, b}); // su dung ngoac '{}' thay cho make_pair
    cnt[a][b] = 0;
    while (!q.empty())
    {
        pair<int, int> temp = q.front();
        int x = temp.first;
        int y = temp.second;
        if (x == c && y == d)
        {
            cout << cnt[c][d] << endl;
            return;
        }
        // xet di sang phai
        for (int i = x + 1; i < n; i++)
        {
            if (s[i][y] == 'X')
                break;
            else
            {
                if (cnt[i][y] == -1)
                {
                    q.push({i, y});
                    cnt[i][y] = cnt[x][y] + 1;
                }
            }
        }
        // di sang trai
        for (int i = x - 1; i >= 0; i--)
        {
            if (s[i][y] == 'X')
                break;
            else
            {
                if (cnt[i][y] == -1)
                {
                    q.push({i, y});
                    cnt[i][y] = cnt[x][y] + 1;
                }
            }
        }
        // đi len tren
        for (int i = y + 1; i < n; i++)
        {
            if (s[x][i] == 'X')
                break;
            else
            {
                if (cnt[x][i] == -1)
                {
                    q.push({x, i});
                    cnt[x][i] = cnt[x][y] + 1;
                }
            }
        }
        // di xuong duoi
        for (int i = y - 1; i >= 0; i--)
        {
            if (s[x][i] == 'X')
                break;
            else
            {
                if (cnt[x][i] == -1)
                {
                    q.push({x, i});
                    cnt[x][i] = cnt[x][y] + 1;
                }
            }
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
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                cnt[i][j] = -1;
            }
        cin >> a >> b >> c >> d;
        BFS();
    }
}