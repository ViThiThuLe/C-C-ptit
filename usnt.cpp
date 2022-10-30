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
		long n;
		cin >> n;
		while(n > 1){
			cout << nto(n) << " ";
			n /= nto(n);
		}
		cout << endl;
	}
}
