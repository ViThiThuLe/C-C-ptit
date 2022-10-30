#include <bits/stdc++.h>
using namespace std;

int nto(int a){
    if(a < 2) return 0;
    for( int i = 2; i <= sqrt(a); i++){
        if( a % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        for(int i = m; i <= n; i++){
            if(nto(i)) cout << i << " ";
        }
        cout << endl;
    }
}