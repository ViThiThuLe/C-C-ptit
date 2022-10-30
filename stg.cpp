#include<bits/stdc++.h>
using namespace std;

int nto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int ktra(int n){
	int a = n % 10;
	n /= 10;
	while(n>0){
		int b = n % 10;
		if(a == b) return 0;
		a = b;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, dem = 0;
		cin >> n;
		int a = pow(10, n-1), b = pow(10,n);
		for(int i = a; i < b; i++){
			if(nto(i) && ktra(i)) dem++;
		}
		cout << dem << endl;
	}
}
