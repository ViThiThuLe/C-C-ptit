#include <bits/stdc++.h>
using namespace std;
int Left[] = {4, 1, 3, 5, 2, 6};
int Right[] = {1, 5, 2, 4, 6, 3};
map<string, int> cnt;
int dau[7], cuoi[7] = {};

string convert(int A[])
{
    string newS = "";
    for (int i = 0; i < 6; i++)
        newS += char(A[i] + '0');
    return newS;
}

string quaytrai(string a)
{
    string tg = "";
    for (int i = 0; i < 6; i++)
        tg += a[Left[i] - 1];
    return tg;
}

string quayphai(string a)
{
    string tg = "";
    for (int i = 0; i < 6; i++)
        tg += a[Right[i] - 1];
    return tg;
}

void bfs()
{
    queue<string> q;
    string u = convert(dau);
    q.push(u);
    cnt[u] = 0;
    while (!q.empty())
    {
        string u = q.front();
        // 123456
        if (u == convert(cuoi))
        {
            cout << cnt[u] << '\n';
            return;
        }
        // push cac trang thai tiep theo
        string l = quaytrai(u);
        // 413526
        string r = quayphai(u);
        // 152463
        if (cnt.find(l) == cnt.end())
        {
            q.push(l);
            cnt[l] = cnt[u] + 1;
        }
        if (cnt.find(r) == cnt.end())
        {
            q.push(r);
            cnt[r] = cnt[u] + 1;
        }
        // cout << l << " " << r << '\n';
        q.pop();
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
            cin >> dau[i];
        for (int i = 0; i < 6; i++)
            cin >> cuoi[i];
        bfs();
        cnt.clear();
    }
}
