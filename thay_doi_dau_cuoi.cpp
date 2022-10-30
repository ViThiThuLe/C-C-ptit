#include<stdio.h>
#include<math.h>
int main(){
	int n,k,dem=0,a,b,m=0;
	scanf("%d",&n);
	b=n%10;
	k=n;
	while(n>0){
		a=n%10;
		dem++;
		n/=10;
	}
	printf("%d %d\n",a,b);
	m=k - a*pow(10,dem-1) + b*pow(10,dem-1) -b+a;
	printf("%d",m);
}
