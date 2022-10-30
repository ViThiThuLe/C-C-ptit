#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, max = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n -1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] <= a[j]){
                    if( abs( i - j) > max) max = abs(i - j);
                }
            }
        }
        cout << max << endl;
    }
}