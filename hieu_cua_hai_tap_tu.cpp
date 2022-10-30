// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--){
//         string s, s1;
//         getline(cin, s);
//         getline(cin, s1);
//         string a[100], b[100];
//         stringstream s2(s), s3(s1);
//         int k = 0, h = 0, m;
//         while( s2 >> a[k]){
//             k++;
//         }
//         sort(a, a + k);
//         while( s3 >> b[h]){
//             h++;
//         }
//         for(int i = 0; i < k; i++){
//             m = 1;
//             for(int j = i+1; j < k; j++){
//                 if( a[i] == a[j]) m = 0;
//             }
//             if(m == 1){
//                 int f = 0;
//                 for(int j = 0; j < h; j++){
//                     if(a[i] == b[j]){
//                         f = 1;
//                         break;
//                     }
//                 }
//                 if( f == 0)
//                 cout << a[i] << " ";
//             }
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        map<string, int> mp1;
        map<string, int> mp2;
        stringstream m1(s1), m2(s2);
        string a1[100], a2[100];
        int k1 = 0, k2 = 0;
        while (m1 >> a1[k1])
            mp1[a1[k1]]++;
        while (m2 >> a2[k2])
            mp2[a2[k2]]++;
        map<string, int>::iterator i;
        for (i = mp1.begin(); i != mp1.end(); i++)
        {
            if (i != mp2.find(i->first) && i != mp2.end())
            {
                cout << i->first << " ";
            }
        }
        cout << endl;
    }
}
