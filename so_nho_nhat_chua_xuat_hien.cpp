#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        if(a[0] > 1) cout << "1";
        else if(a[n-1] <= 0) cout << "1";
        else{
            for(int i = 0; i < n; i++){
                if(a[i] >= 0 && a[i] != a[i+1]){
                    if(a[i] + 1 != a[i+1]){
                        cout << a[i] + 1 ;
                        break;
                    }
                }
                if(a[i] <= 0 && a[i+1] > 1){
                    cout << "1";
                    break;
                }
            }
        }
        cout << endl;
    }
}