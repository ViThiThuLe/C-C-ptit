#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==2||n==6) cout << "20";
		if(n==3||n==5) cout << "38";
		if(n==4) cout << "50";
		if(n==7) cout << "8";
		if(n==9) cout << "0";
		if(n==8) cout << "5";
		cout << endl;
	}
}