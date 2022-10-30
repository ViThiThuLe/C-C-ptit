#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
        int n, m = 0;
        cin >> n;
        int a[n], vt[n], s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
            vt[i] = s - a[i];
        }
        for(int i = 0; i < n; i++){
            if( vt[i] == s - a[i] - vt[i]){
                cout << i + 1 << endl;
                m = 1;
                break;
            }
        }
        if(m == 0) cout << "-1" << endl;
    }
}