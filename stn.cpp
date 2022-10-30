
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int n = s.length();
		int k = 1;
		for(int i = 0; i < n/2 ; i++){
			if(s[i] != s[n - 1 -i]){
				k = 0;
				break;
			}
		}
		if( k == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}