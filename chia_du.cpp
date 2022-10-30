#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m, k = 0;
		cin >> a >> m;
		for( int i = 0; i < m; i++){
			if( i * a % m == 1){
				cout << i;
				k = 1;
				break;
			}
		}
		if(k == 0) cout << -1;
		cout << endl;
	}
}
