#include<stdio.h>
int main(){
	int a,b,m,n;
	int s1=0,s2=0;
	scanf("%d%d",&a,&b);
	int a1,b1;
	a1=a,b1=b;
	while(a>0){
		m=a%10;
		s1+=m;
		a/=10;
	}
	while(b>0){
		n=b%10;
		s2+=n;
		b/=10;
	}
	if(s1>s2) printf("%d %d",b1,a1);
	else printf("%d %d",a1,b1);
}
