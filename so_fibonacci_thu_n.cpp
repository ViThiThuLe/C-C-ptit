#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n; 
		if (n == 0) {
			cout << "0" << endl;
		}

		if (n == 1) {
			cout << "1" << endl;
		}

		if (n >= 2) {
			long long fn, f0 = 0, f1 = 1;
			while( fn <= n)
			{
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
			}

			cout << fn << endl;
		}
	
	return 0;
}
