#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n)
{
	long long a1 = 1, a2 = 1;
	if (n == 1 || n == 2)
		return 1;
	long long i = 3, a;
	while (i <= n)
	{
		a = a1 + a2;
		a1 = a2;
		a2 = a;
		i++;
	}
	return a;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (n == 0)
			cout << "0" << endl;
		if (n == 1)
			cout << "1" << endl;
		cout << fibonacci(n) << endl;
	}
}