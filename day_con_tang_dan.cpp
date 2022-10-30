#include <bits/stdc++.h>
using namespace std;
int n, a[25], b[25];
vector<int> v;
vector<string> v2;
string tam;

void donv()
{
	for (int i = 0; i < n; i++)
	{
		if (b[i] == 1)
			v.push_back(a[i]);
	}
}

int check()
{
	if (v.size() < 2)
		return 0;
	else
	{
		for (int i = 0; i < v.size() - 1; i++)
			if (v[i] > v[i + 1])
				return 0;
	}
	return 1;
}

void donv2()
{
	if (check())
	{
		tam = "";
		for (int i = 0; i < v.size(); i++)
		{
			tam += (to_string(v[i]) + " "); // bien thanh xau. VD v[3,7] -> 3 7 (xau)
		}
		v2.push_back(tam);
	}
	v.clear(); // xoa di de don mang sau vao
}

void in()
{
	sort(v2.begin(), v2.end());
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << endl;
}

void sinh(int k)
{
	for (int i = 0; i <= 1; i++)
	{
		b[k] = i;
		if (k == n - 1)
		{
			donv(); // donv va donv2 phai cung nhau chay song song
			donv2();
		}
		else
			sinh(k + 1);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sinh(0);
	in();
}
