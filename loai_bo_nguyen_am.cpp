#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    for(int i = 0; i < n; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
            cout << "." << s[i];
    }
}