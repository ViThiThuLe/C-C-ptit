#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, a[100], dem = 0;
        cin >> n >> k;
        for( int i = 0; i < n; i++){
            cin >> a[i];
        }
        for( int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if( a[j] + a[i] == k) dem++;
            }
        }
        cout << dem << endl;
    }
}
