#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		long long n=a;
		long long m=0;
		while(a>0){
			m=m*10+a%10;
			
			a/=10;
		}
		if(m==n) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
