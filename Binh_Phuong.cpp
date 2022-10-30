#include<stdio.h>
int main(){
	long long t;
	scanf("%lld", &t);
	for(int i=1; i<=t;i++){
		long long a;
		scanf("%lld",&a);
		printf("%lld", a*a);
		printf("\n");
	}
}
