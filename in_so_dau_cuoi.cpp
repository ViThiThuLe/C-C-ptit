#include<stdio.h>
int main(){
	long long n;
	int m;
	scanf("%lld",&n);
	m=n%10;
	while(n>=10){
		n=n/10;
	}
	printf("%lld %d",n,m);
}
