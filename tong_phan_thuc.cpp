#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;
    double s = 0;
    for(int i = 1; i <= n; i++){
        s += (float)1/i;
    }
    cout << setprecision(4) << fixed << s;
}