#include<stdio.h>
int main(){
	long long n;
	int tich=1;
	scanf("%lld",&n);
	while(n!=0){
		tich*=(n%10);
		n=n/10;
	}printf("%d",tich);
}
