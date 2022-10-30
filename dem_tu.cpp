#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string a;
        stringstream s1(s);
        int k = 0;
        while( s1 >> a){
            k++;
        }
        cout << k << endl;
    }
}
