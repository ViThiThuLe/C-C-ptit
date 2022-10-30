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
        int dem = 0;
        for(int i = 0; i < n; i++){
            dem++;
            for(int j = i+1; j < n; j++){
                if( s[i] == s[j] && i != j)
                    dem++;
            }
        }
        cout << dem << endl;
    }
}