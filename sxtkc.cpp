#include<bits/stdc++.h> 

using namespace std; 

bool cmp(int a,int b){ 
int x;
	return abs(x-a)<abs(x-b); 
} 
void process(){ 
int n,x;
	cin>>n>>x; 
	int a[n+1]; 
	for(int i=0;i<n;i++) 
		cin>>a[i]; 
	stable_sort(a,a+n,cmp); 
	for(int i=0;i<n;i++){ 
		cout<<a[i]<<" "; 
	} 
	cout<<endl; 
} 
main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
	int n,x;
		process(); 
	} 
	return 0; 
}
