#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k = 0, min = n;
        for(int i = 0; i < n; i++){
			for(int j = i+1; j < n ; j++){
			    if(a[i] == a[j] && j < min){
                    min = j;
                    k = 1;
                    break;
                } 
		    }
	    }
        if( k == 1)
            cout << a[min] << endl;
        else cout << "-1" << endl;
    }
}