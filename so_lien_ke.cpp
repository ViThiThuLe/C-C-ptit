#include <bits/stdc++.h>
using namespace std;
 
 int ktra(long long n){
    int a = n % 10;
    n /= 10;
    while( n > 0){
        int b = n % 10;
        if( a != b + 1 && b != a + 1) return 0;
        a = b;
        n /= 10;
    }
    return 1;
 }
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(ktra(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}