#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a;
		scanf("%ld",&a);
		printf("%0.15lf",(double)1/a);
		printf("\n");
	}
}
