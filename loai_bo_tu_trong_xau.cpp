#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    string a[100];
    stringstream s2(s);
    int k = 0;
    while( s2 >> a[k]){
        k++;
    }
    for(int i = 0; i < k; i++){
        if(a[i] != s1) cout << a[i] << " ";
    }
}