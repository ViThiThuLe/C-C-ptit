#include <bits/stdc++.h>
using namespace std;

int nto(long long n){
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
        int n;
        cin >> n;
        long long a = 100000;
        for( int i = 2; i < a; i++){
            for(int j = i; j < a; j++){
                if( nto(j) && nto(i) && (j + i == n)){
                    cout << i << " " << j;
                    break;
                }
            }
        }
        cout << endl;
    }
}
