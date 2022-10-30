#include <bits/stdc++.h>
using namespace std;

long ktra(long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return i;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, m = 0;
		cin >> n;
		int a[10000];
		while(n > 1){
			a[m] = ktra(n);
			n /= ktra(n);
			m++; 
		}
		if(m != 3) cout << "0";
		else{	
			if(a[0] != a[1] && a[1] != a[2]) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}