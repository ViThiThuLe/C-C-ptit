#include <bits/stdc++.h>
using namespace std;

int ktra( long long n){
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    if( a == 6 && b == 8) return 1;
    return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
   		cin >> n;
           if( ktra(n)) cout << "1" << endl;
           else cout << "0" << endl;
    }
}