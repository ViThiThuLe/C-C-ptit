#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string a[1000];
        stringstream s1(s);
        int k = 0;
        while(s1 >> a[k]){
            k++;
        }
        int chan = 0, le = 0;
        for(int i = 0; i < k; i++){
            if(a[i][a[i].length()-1] % 2 == 0) chan++;
                else le++;
        }
        if( k % 2 == 0){
            if( chan > le) cout << "YES";
            else cout << "NO";
        }
        else {
            if( chan < le) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
}