#include <bits/stdc++.h>

using namespace std;

void TC()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    stack<string> st;
    string token;
    while (ss >> token)
    { // tách các p.tử trong xâu s rồi gán vào stack
        st.push(token);
    }
    while (!st.empty())
    { // in các p.tử trong stack rồi xóa
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        TC();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--){
//         string s;
//         getline(cin, s);
//         string a[100];
//         int k = 0;
//         stringstream s1(s);
//         while( s1 >> a[k]){
//             k++;
//         }
//         for(int i = k-1; i >= 0; i--){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
// }
