#include <bits/stdc++.h>
using namespace std;

int tong(int n){
    int s = 0, m;
    while(n > 0){
        m = n % 10;
        s += m;
        n /= 10;
    }
     return n = s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        while(n > 9){
            n = tong(n);
        }
        cout << n << endl;
    }
}