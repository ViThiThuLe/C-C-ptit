#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int n = s.length();
        int k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if( s[i] == s[j] && i != j) k = 1;
            }
            if(k == 0) cout << s[i];
            k = 0;
        }
        cout << endl;
    }
}
