#include<bits/stdc++.h>
using namespace std;

int ktra(int n){
	int a = 0, b = 1, c = 0;
	while( c < n){
		c = a + b;
		a = b;
		b = c;
	}		
	if(c != n) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
   		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            if(ktra(a[i])) cout << a[i] << " ";
        }
        cout << endl;		
	}
}