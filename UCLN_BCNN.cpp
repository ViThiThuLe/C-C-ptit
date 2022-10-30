#include<stdio.h>
int ucln(int a,int b)
{
	int k;
	int n=a*b;
	while(b>0)
	{
		k=a%b;
		a=b;
		b=k;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",ucln(a,b));
	printf("%lld ",(long long)a*b/ucln(a,b));
}
