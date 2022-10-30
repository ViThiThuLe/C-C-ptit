#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int k = n + m;
        int a[n], b[m], c[k];
        for(int i = 0; i < n; i++){
             cin >> a[i];
        }
        for(int i = 0; i < m; i++){
             cin >> b[i];
        }
        for(int i = 0; i < k; i++){
            if( i < n) c[i] = a[i];
            else c[i] = b[i - n];
        }
        sort(c, c + k);
        for(int i = 0; i < k; i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
}
