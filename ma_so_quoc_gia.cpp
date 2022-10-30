// #include<bits/stdc++.h>
// using namespace std;

// long long tachso(long long n){
// 	long long a = 0;
// 	long long c = n;
// 	int k = 0;
// 	while(n > 0){
// 		int b = n % 10;
// 		if(b == 4 && k == 0){
// 			c/=10;
// 			if(c % 10 == 8){
// 				c /= 10;
// 				if(c % 10 == 0){
// 					k++;
// 					c /= 10;
// 				}
// 			}
// 		}
// 		if(k == 1){
// 			k++;
// 			n = c;
// 			b = n % 10;
// 			a = a * 10 + b;
// 			n /= 10;
// 			c /= 10;
// 		}else{
// 			a = a*10 +b;
// 			c = n;
// 			n /= 10;
// 			c /= 10;
// 		}
// 	}
// 	return a;
// }

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		long long n;
// 		cin >> n;
// 		long long a = tachso(n);
// 		while(a > 0){
// 			int b = a % 10;
// 			cout << b;
// 			a /= 10;
// 		}
// 		cout << endl;
// 	}
// }



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
		for(int i = 0; i < n; i++){
		//	if(s[i] != '0' && s[i + 1] != '8' && s[i + 2] != '4')
		//		cout << s[i];
			if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
				s.erase(i, 3);
		}
		cout << s << endl;
    }
}