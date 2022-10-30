#include <bits/stdc++.h>
using namespace std;

int ktra(long long n){
    
}

int main(){
	int t;
	cin >> t;
	while(t--){
        long long n;
		cin >> n;
		long long a = n, m = 0;
		while(a > 0){
			m = m * 10 + a % 10;	
			a /= 10;
		}
		if(m == n) cout << "YES";
		else cout << "NO";
        cout << endl;
    }
}
