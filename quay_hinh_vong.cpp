#include <bits/stdc++.h>
using namespace std;

int Left[] = {4, 1, 3, 5, 2, 6};
int Right[] = {1, 5, 2, 4, 6, 3};
int dau[7], cuoi[7] = {};
map<string, int> cnt;

string convert(int a[])
{
    string newa = "";
    for (int i = 0; i < 6; i++)
        newa += (char)(a[i] + '0');
    return newa;
}

string quaytrai(string a)
{
    string tmp = "";
    for (int i = 0; i < 6; i++)
        tmp += a[Left[i] - 1];
    return tmp;
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
    q.push(convert(dau));
    cnt[convert(dau)] = 0;
    while (!q.empty())
    {
        string a = q.front();
        if (a == convert(cuoi))
        {
            cout << cnt[a] << endl;
            return;
        }
        string l = quaytrai(a);
        string r = quayphai(a);
        if (cnt.find(l) == cnt.end())
        {
            q.push(l);
            cnt[l] = cnt[a] + 1;
        }
        if (cnt.find(r) == cnt.end())
        {
            q.push(r);
            cnt[r] = cnt[a] + 1;
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
        for (int i = 0; i < 6; i++)
            cin >> dau[i];
        for (int i = 0; i < 6; i++)
            cin >> cuoi[i];
        bfs();
    }
}
