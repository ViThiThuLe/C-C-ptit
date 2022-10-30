#include<stdio.h>
int main(){
	long long n;
	int sum=0,t,i;
	scanf("%d",&t);
	scanf("%lld",&n);
	for(;i<=t;){
	while(n!=0){
		i=n%10;
		sum+=i;
		n/=10;
	}
	}printf("%d",sum);
}
