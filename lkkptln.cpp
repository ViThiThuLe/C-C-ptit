#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[100000], k;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n - 1 ; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] > a[i]){
					int t = a[i];
						a[i] = a[j];
						a[j] = t;
				}
			}
		}
		for(int i = 0; i < k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
