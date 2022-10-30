#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a[100000]={},s[600000]={};
		long long n,p=1,ok=1;
		scanf("%lld",&n);
		for(int i=1;i<=n;i++){
			scanf("%lld",&a[i]);
		}
		long long MaxS=a[1];
		long long MaxE=a[1];
		for(int i=2;i<=n;i++){
			if(MaxE>0) MaxE+=a[i];
			else MaxE=a[i];
			if(MaxS<MaxE) MaxS=MaxE;
		}
		printf("%lld\n",MaxS);
	}
}
