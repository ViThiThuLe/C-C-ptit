#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int s1 = 0, s2 = 0, t;
        for(int i = 0; i < s.length(); i++){
            if( i % 2 == 0) s1 += s[i] - '0';
            else s2 += s[i] - '0';
        }
        t = s1 - s2;
        if( t % 11 == 0) cout << "1" << endl;
        else cout << "0" << endl;
    }
}