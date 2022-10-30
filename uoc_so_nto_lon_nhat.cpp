#include <bits/stdc++.h>
using namespace std;

int nto(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int uoc(long long n){
    long long max = 0;
        for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			if(nto(i) && i > max)    max = i;
			if(nto(n/i) && ((n/i) > max))  max = (n/i);	
			}
		}
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << uoc(n);
        cout << endl;
    }
}