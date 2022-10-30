#include <bits/stdc++.h>
using namespace std;
 
int ktra(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return i;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    int a[100000], m = 0;
    while( n > 1){
        a[m] = ktra(n);
        n /= ktra(n);
        m++;
    }
    int vt = 0;
    for(int i = 0; i < m; i++){
        if( a[i] != a[i+1]){
            cout << a[i] << " " << i - vt + 1 << endl;
            vt = i + 1;
        }
    }
    
}