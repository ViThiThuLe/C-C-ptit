#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, a[1000000], dem = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for( int i = 0; i < n; i++){
			if( a[i] != 0)
				cout << a[i] << " ";
			else dem++;
		}
		for( int i = 0; i < dem; i++){
			cout << "0" << " ";
		}
		cout << endl;
	}
}
