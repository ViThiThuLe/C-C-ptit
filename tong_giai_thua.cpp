#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long gt=1;
	long long t=0;
	for(int i=1;i<=n;i++){
		gt*=i;
		t+=gt;
	}
	printf("%lld",t);
}
