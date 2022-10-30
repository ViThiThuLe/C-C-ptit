#include<stdio.h>

int ktra(long long n){
	if(n<4) return 0;
	int a = n%100, b;
	n/=10;
	while(n>10){
		 b = n%100;
		n/=10;
	}
	if(a == b) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(ktra(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
