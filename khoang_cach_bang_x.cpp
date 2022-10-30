#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k = 0;
        cin >> n >> x;
        int a[n], b[10000] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            if(b[a[i] - x] == 1){
                cout << "1" << endl;
                k = 1;
                break;
            } 
        }
        if( k == 0) cout << "-1" << endl;
    }
}