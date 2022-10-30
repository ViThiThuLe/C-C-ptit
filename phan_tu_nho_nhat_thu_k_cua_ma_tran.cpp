#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        long long b = n*n;
        int a[b];
        for(int i = 0; i < b; i++){
            cin >> a[i];
        }
        sort(a, a + b);
        cout << a[k-1] << endl;
    }
}