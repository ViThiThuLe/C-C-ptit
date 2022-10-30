//#include<bits/stdc++.h> 
//using namespace std; 
//void in(){ 
//	int n; 
//	cin>>n; 
//	int a[n][n]; 
//	int b[100001]; 
//	vector<int> c; 
//	memset(b,0,sizeof(b)); 
//	for(int i=0;i<n;i++){ 
//	for(int j=0;j<n;j++){ 
//	cin>>a[i][j]; 
//	if(b[a[i][j]]==i){ 
//		b[a[i][j]]+=1; } 
//		if(b[a[i][j]]==n){ 
//		c.push_back(a[i][j]); } 
//		} } 
//		sort(c.begin(), c.end()); 
//		c.erase(unique(c.begin(), c.end()), c.end()); 
//		cout<<c.size(); } 
//int main(){ 
//	int n; 
//	cin>>n; 
//	while(n--){ 
//	in(); 
//	cout<<endl; } 
//}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dem = 0;
        cin >> n;
        int a[n+5][n+5], b[1000000] = {0}, max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] > max)
                    max = a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[a[i][j]] == i)
                    b[a[i][j]]++;
            }
        }
        for (int i = 0; i < max; i++)
        {

            if (b[i] >= n)
                dem++;
        }
        cout << dem << endl;
    }
}
