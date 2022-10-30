#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    string a[100];
    stringstream s1(s);
    int k = 0;
    while(s1 >> a[k]){
        a[k][0] = a[k][0] - 32;
        k++;
    }
    for(int i = 0; i < k - 1; i++){
        cout << a[i] ;
        if( i == k - 2) cout << "," << " ";
        else cout << " ";
    }
    for(int i = 1; i < a[k-1].length(); i++){
        a[k-1][i] -= 32;
    }
    cout << a[k - 1];
}