#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k, s = 0;
		cin >> n >> k;
		int a = n / k;
		if( a == 0){
			for(int i = 1; i <= n; i++) s +=i;
		}
		else{
			for( int i = 1; i < k; i++)	s += i;	
			s *= a;
			if( n % k != 0) {
				for( int i = 1; i <= n % k; i++) s += i;
			}
		}
		if( k == s) cout << "1";
		else cout << "0";
		cout << endl;
	}
}
