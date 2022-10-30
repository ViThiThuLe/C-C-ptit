#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k = 1;
		cin >> n;
		while(n != 0){
		int m = n % 10;
		if(m != 0 && m != 6 && m!= 8){
			k = 0;
		}
		n /= 10;
	}
	if(k == 0) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
