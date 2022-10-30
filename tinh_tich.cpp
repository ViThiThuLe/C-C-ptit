#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m;
		long long a[100000], b[100000], min = 10000000, max = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		for(int i = 0; i < n; i++){
			if(a[i] > max) max = a[i];
		}
		for(int i = 0; i < m; i++){
			if(b[i] < min) min = b[i];
		}
		cout << max * min << endl;
	}
}
