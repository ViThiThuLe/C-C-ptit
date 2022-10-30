#include <bits/stdc++.h>
using namespace std;

int nto(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return i;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for( int i = 1; i <= n; i++){
            if( i == 1) cout << "1" << " ";
            else if( i % 2 == 0) cout << "2" << " ";
            else if(nto(i) == 1)
                cout << i << " ";
            else
                cout << nto(i) << " ";
        }
        cout << endl;
    }
}