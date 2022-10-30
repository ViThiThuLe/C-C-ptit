#include <bits/stdc++.h>
using namespace std;

int ktra(int n){
    int chan = 0, le = 0;
    while(n > 0){
        int m = n % 10;
        if( m % 2 == 0) chan ++;
        else le++;
        n /= 10;
    }
    if(chan == le) return 1;
    return 0;
}

int main(){
    int n, dem = 0;
    cin >> n;
    int a = pow(10, n - 1), b = pow(10, n);
    if(n % 2 != 0) return 0;
    else{
        for(int i = a; i < b; i++){
            if(ktra(i)){
                cout << i << " ";
                dem++;
            }
            if(dem == 10){
                cout << endl;
                dem = 0;
            }
        }
    }
}