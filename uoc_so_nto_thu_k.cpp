#include <bits/stdc++.h>
using namespace std;

long nto(long n){
	if(n < 2) return n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return i;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k, dem = 0;
		cin >> n >> k;
		while(n > 1){
			if(nto(n)) dem++;
			if( dem == k){
				 cout << nto(n);
				 break;
			}
			n /= nto(n);
		}
		if(dem != k) cout << "-1";
		cout << endl;
	}
}