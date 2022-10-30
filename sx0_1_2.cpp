#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, a[100000], max = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n ; i++){
			for( int j = n - 1; j > i; j--){
				if(a[j] < a[i]){
					int t = a[i];
						a[i] = a[j];
						a[j] = t;
				}
			}
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
