#include <bits/stdc++.h>
using namespace std;

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int nto(int n){
	if(n < 2) return n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return i;
	}
	return n;
}

int ktra(int n){
    int s = 0;
    while(n > 0){
        int m = n % 10;
        s += m;
        n /= 10;
    }
    return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s = 0, m = 0;
		cin >> n;
		m = ktra(n);
		if( nt(n)){
            cout << "NO" << endl;
        }
        else {
            while(n > 1){
			    s += ktra(nto(n));
			    n /= nto(n);
	    	}
			if( m == s) cout << "YES" << endl;
	    	else cout << "NO" << endl;
        }
	}
}