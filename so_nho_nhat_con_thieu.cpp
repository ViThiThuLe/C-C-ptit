#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n - 1];
        for(int i = 0; i < n -1; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int k = 0;
        if(a[0] > 1) cout << "1";
        else if(a[n - 2] <= 0) cout << "1";
        else if(a[0] == a[n-2]) cout << a[n-2] +1;
        else {
            for(int i = 0; i < n - 1; i++){
                if(a[i] != a[i + 1] && a[i] >= 0){
                    if(a[i] + 1 != a[i+1]){
                        cout << a[i]+1;
                        break;
                    }
                }
                if( a[i] <= 0 && a[i+1] > 1){
                    cout << "1";
                    break;
                }
            }
        }

        cout << endl;
    }
}
