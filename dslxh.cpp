#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, a[100000], max = 0, dem = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if( a[i] == k) dem++;
		}
		if(dem == 0) cout << "-1";
		else cout << dem;
		cout << endl;
	}
}
