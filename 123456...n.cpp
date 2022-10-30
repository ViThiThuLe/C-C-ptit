#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		printf("%ld\n",(long) n*(n+1)/2);
	}
}
	
