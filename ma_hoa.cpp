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
        int vt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != s[i+1]){
                cout << s[i] << i - vt + 1;
                vt = i + 1;
            }
        }
        cout << endl;
    }
}