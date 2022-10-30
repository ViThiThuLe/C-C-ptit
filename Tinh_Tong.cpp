#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0)printf("0");
	else {
	float n=a/b; 
	printf("%d %d %d %0.2f %d",a+b,a-b,a*b,n,a%b); 
    }
}
