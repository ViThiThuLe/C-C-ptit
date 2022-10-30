#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, dem = 0;
    cin >> n;
    cin.ignore();
    string s[10000];
    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
    }
    sort(s, s+n);
    for(int i = 0; i < n; i++){
        if(s[i] != s[i+1]) dem++;
    }
    cout << dem ;
}