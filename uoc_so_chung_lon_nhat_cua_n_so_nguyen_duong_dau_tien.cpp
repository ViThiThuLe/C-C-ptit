#include <bits/stdc++.h>
using namespace std;

long long ucln( long long a, long long b){
    while(b != 0){
        int m = a % b;
        a = b;
        b = m;
    }
    return a;
}

long long bcnn(long long a, long long b){
    return a*b/ucln(a,b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, bc = 1;
        cin >> n;
        for( int i = 1; i <= n; i++){
            bc = bcnn(bc, i);
        }
        cout << bc << endl;
    }
}