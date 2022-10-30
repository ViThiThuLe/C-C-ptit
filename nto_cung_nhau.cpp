#include <bits/stdc++.h>
using namespace std;

int nto(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int ucln( int a, int b){
    while(b != 0){
        int m = a % b;
        a = b;
        b = m;
    }
    if( a == 1) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, t = 0;
        cin >> x;
        for(int k = 1; k <= x; k++){
            if(ucln(k, x)) t++;
        }
        if(nto(t)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}