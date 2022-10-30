#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, dem = 0;
        cin >> n;
        long long  a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n -1; i++){
            if(a[0] != a[1])    dem++;
        }
        if(dem != 0) cout << a[0] << " " << a[1];
        else cout << "-1";
        cout << endl;
    }
}
