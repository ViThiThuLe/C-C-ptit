#include <bits/stdc++.h>
using namespace std;

void ktra(int n, int m){
    int a[m];
    for(int i = 0; i < m; i++){
        a[i] = n % 2;
        n /= 2;
    }
    for(int i = m - 1; i >= 0; i--){
        cout << a[i];
    }
    cout << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = pow(2, n);
        for(int i = 0; i < a; i++){
            ktra(i, n);
        }
        cout << endl;
    }
}