#include <bits/stdc++.h>
using namespace std;

int n;

void bfs()
{
	map<int, int> cnt;
	queue<int> q;
	q.push(n);
	cnt[n] = 0;
	while (!q.empty())
	{
		int a = q.front();
		if (a == 1)
		{
			cout << cnt[a] << endl;
			return;
		}
		if (cnt.find(a - 1) == cnt.end())
		{
			q.push(a - 1);
			cnt[a - 1] = cnt[a] + 1;
		}
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				int newA = a / i;
				if (cnt.find(newA) == cnt.end())
				{
					q.push(newA);
					cnt[newA] = cnt[a] + 1;
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
		bfs();
	}
}
