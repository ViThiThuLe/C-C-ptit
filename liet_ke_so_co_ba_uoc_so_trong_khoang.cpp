#include <bits/stdc++.h>
using namespace std;

int nto( int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, dem = 0;
        cin >> a >> b;
        for(int i = a; i <= sqrt(b); i++){
            if(nto(i) && i*i <= b ) dem++;
        }
        cout << dem << endl;
    }
}