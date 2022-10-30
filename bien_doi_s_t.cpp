#include<bits/stdc++.h>
using namespace std;

int a, b;
int cnt[10005];

void sinh(){
	queue<int> q;
	q.push(a);
	cnt[a] = 0;
	while(!q.empty()){
		int x = q.front();
		if(x == b){
			cout << cnt[x] << endl;
			return;
		}
		if(cnt[x*2] == -1){
			q.push(x*2);
			cnt[x*2] = cnt[x] + 1;
		}
		if(cnt[x-1] == -1){
			q.push(x-1);
			cnt[x-1] = cnt[x] + 1;
		}
		q.pop();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b;
		memset(cnt,-1,sizeof(cnt));
		sinh();
	}
}
