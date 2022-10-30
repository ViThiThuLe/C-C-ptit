#include <bits/stdc++.h>
using namespace std;

int ktra( long long n){
    int s = 0;
    while(n > 0){
        long long a = n % 10;
        s += a;
        n /= 10;
    }
    return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
        int m, s, dem = 0;
        cin >> m >> s;
        long long x[1000000], y = 0, max = 0, min = 1000000;
        long long a = pow(10, m-1), b = pow(10, m);
        for( int i = a; i <= b; i++){
            if(ktra(i) == s){
                x[y] = i;
                y++;
                dem++;
            }
        }
        for(int i = 0; i < y; i++){
        	if(x[i] < min) min = x[i];
		}
        cout << min << " " << max;
        if(dem == 0) cout << "-1" << " " << "-1";
    }
}
