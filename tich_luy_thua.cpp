#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
        long long x, y, p, a = 1, b;
        cin >> x >> y >> p;
        for(int i = 1; i <= y; i++){
            a = (a * x) % p;
        }
        cout << a << endl;
    }
}