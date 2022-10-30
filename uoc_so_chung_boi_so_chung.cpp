#include <bits/stdc++.h>
using namespace std;

int ucln( long long a, long long b){
    while(b != 0){
        long long m = a % b;
        a = b;
        b = m;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, bcnn;
        cin >> a >> b;
        bcnn = a*b/ucln(a,b);
        cout << bcnn << " " << ucln(a,b);
        cout << endl;
    }
    
}