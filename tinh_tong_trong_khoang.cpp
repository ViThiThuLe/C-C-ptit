#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
        int n, q, s = 0;
        cin >> n >> q;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l, r;
        for(int i = 1; i <= q; i++){
            cin >> l >> r;
            for(int j = l -1; j <= r - 1; j++){
                s += a[j];
            }
            cout << s << endl;
            s = 0;
        }
    }
}